#include<iostream>
using namespace std;
int main()
{
	int a, b, c, num;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << "Enter third number: ";
	cin >> c;
	if (a > b&&a > c)
	{
		num = a;
	}
	else if (b > a&&b > c)
	{
		num = b;
	}
	else
	{
		num = c;
	}
	cout << num << endl;
	system("pause");
	return 0;
}