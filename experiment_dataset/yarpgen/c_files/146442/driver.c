#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 267333669U;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3921566164U;
unsigned short var_8 = (unsigned short)30843;
int zero = 0;
int var_14 = 839013374;
signed char var_15 = (signed char)122;
short var_16 = (short)2986;
short var_17 = (short)24226;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
