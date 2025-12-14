#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -992858060;
unsigned long long int var_6 = 727308806379712384ULL;
short var_7 = (short)-31579;
unsigned int var_8 = 1606771409U;
short var_11 = (short)25538;
unsigned long long int var_18 = 14222588492359853813ULL;
short var_19 = (short)3413;
int zero = 0;
signed char var_20 = (signed char)124;
unsigned long long int var_21 = 3750268934381043159ULL;
unsigned char var_22 = (unsigned char)160;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
