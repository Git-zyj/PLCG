#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
int var_6 = 1923959891;
unsigned char var_9 = (unsigned char)33;
int var_11 = 2119935247;
unsigned short var_12 = (unsigned short)23078;
unsigned long long int var_13 = 2467540376637180033ULL;
signed char var_14 = (signed char)81;
int var_15 = -1093106371;
int zero = 0;
long long int var_16 = -9168217174320544175LL;
int var_17 = -580335008;
int var_18 = 1917214961;
unsigned short var_19 = (unsigned short)63758;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
