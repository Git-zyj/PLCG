#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -460306003;
signed char var_4 = (signed char)-82;
unsigned char var_10 = (unsigned char)198;
signed char var_11 = (signed char)62;
int zero = 0;
unsigned long long int var_13 = 2771824534939732486ULL;
short var_14 = (short)-6627;
void init() {
}

void checksum() {
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
