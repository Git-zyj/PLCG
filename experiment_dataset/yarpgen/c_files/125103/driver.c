#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 1846161313581905674ULL;
short var_8 = (short)-21989;
unsigned short var_10 = (unsigned short)29254;
int zero = 0;
unsigned char var_17 = (unsigned char)183;
unsigned int var_18 = 568533029U;
int var_19 = 2140273049;
unsigned long long int var_20 = 14294029190492768049ULL;
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
