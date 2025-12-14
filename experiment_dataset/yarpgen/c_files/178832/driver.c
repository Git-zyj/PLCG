#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1374444304;
unsigned int var_1 = 56135521U;
long long int var_2 = 2893389242111089877LL;
unsigned int var_3 = 19010527U;
int var_4 = 1702867569;
long long int var_6 = 5727305967941648581LL;
unsigned int var_7 = 3473588848U;
unsigned char var_9 = (unsigned char)133;
int zero = 0;
unsigned int var_10 = 2502480438U;
short var_11 = (short)-20536;
unsigned short var_12 = (unsigned short)29976;
int var_13 = 992088069;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
