#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)20985;
long long int var_5 = -2761394009600929150LL;
signed char var_6 = (signed char)37;
long long int var_7 = 736738628009510170LL;
unsigned long long int var_8 = 10340527797907468336ULL;
long long int var_10 = -4102411785237030522LL;
unsigned int var_11 = 2858919844U;
unsigned short var_16 = (unsigned short)35711;
long long int var_17 = 4138284581576502072LL;
unsigned short var_18 = (unsigned short)42952;
int zero = 0;
int var_19 = 1867591797;
int var_20 = -947689937;
unsigned int var_21 = 3508563813U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
