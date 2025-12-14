#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)73;
unsigned char var_2 = (unsigned char)96;
unsigned int var_10 = 1401744702U;
unsigned short var_13 = (unsigned short)59277;
unsigned long long int var_16 = 12618502132916976258ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)244;
unsigned long long int var_18 = 2949798557060397531ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
