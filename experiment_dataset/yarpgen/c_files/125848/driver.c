#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 795268792U;
unsigned int var_2 = 2386069705U;
unsigned long long int var_14 = 9244436855977431032ULL;
int zero = 0;
signed char var_16 = (signed char)7;
signed char var_17 = (signed char)-36;
void init() {
}

void checksum() {
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
