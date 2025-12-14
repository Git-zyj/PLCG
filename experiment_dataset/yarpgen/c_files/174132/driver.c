#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)238;
short var_5 = (short)11811;
unsigned char var_6 = (unsigned char)165;
signed char var_8 = (signed char)53;
int var_10 = 1901708719;
int zero = 0;
unsigned long long int var_11 = 2418844281431790660ULL;
unsigned long long int var_12 = 15676308932847433570ULL;
unsigned long long int var_13 = 15829732924679189975ULL;
unsigned char var_14 = (unsigned char)224;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
