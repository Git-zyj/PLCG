#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22973;
short var_3 = (short)18377;
unsigned long long int var_4 = 1822397970765217587ULL;
unsigned long long int var_12 = 9172266999258723625ULL;
unsigned short var_13 = (unsigned short)24484;
signed char var_14 = (signed char)-69;
short var_15 = (short)-23875;
int zero = 0;
unsigned char var_19 = (unsigned char)33;
unsigned int var_20 = 607793554U;
short var_21 = (short)24078;
unsigned short var_22 = (unsigned short)60459;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
