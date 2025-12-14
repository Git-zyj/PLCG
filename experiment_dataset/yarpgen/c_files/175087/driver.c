#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)17;
unsigned long long int var_11 = 12224797293686209444ULL;
unsigned long long int var_13 = 7007479553138348069ULL;
long long int var_14 = 1775127986470454229LL;
int zero = 0;
short var_16 = (short)3220;
int var_17 = -390329604;
long long int var_18 = 2759132863364809408LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
