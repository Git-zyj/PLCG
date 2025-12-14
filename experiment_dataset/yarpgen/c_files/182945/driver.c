#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1437141659U;
unsigned int var_10 = 2216959561U;
int var_15 = -910795616;
int zero = 0;
unsigned int var_17 = 1922851014U;
unsigned char var_18 = (unsigned char)14;
signed char var_19 = (signed char)113;
unsigned int var_20 = 2938968532U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
