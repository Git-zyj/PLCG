#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2198008021U;
unsigned long long int var_5 = 12466539623265553278ULL;
int zero = 0;
unsigned long long int var_14 = 18379243058996296309ULL;
unsigned char var_15 = (unsigned char)64;
unsigned char var_16 = (unsigned char)164;
unsigned int var_17 = 3687007058U;
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
