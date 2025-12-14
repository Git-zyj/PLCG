#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44044;
unsigned char var_5 = (unsigned char)239;
unsigned short var_7 = (unsigned short)12648;
unsigned char var_8 = (unsigned char)171;
short var_10 = (short)-18376;
unsigned long long int var_13 = 7204246837239003537ULL;
unsigned long long int var_16 = 17740802395296786812ULL;
int zero = 0;
int var_20 = 2016015645;
unsigned char var_21 = (unsigned char)48;
void init() {
}

void checksum() {
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
