#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3737285998U;
int var_2 = 477475378;
unsigned long long int var_3 = 10054799028322074115ULL;
signed char var_6 = (signed char)79;
unsigned short var_8 = (unsigned short)33060;
unsigned int var_10 = 1924409606U;
int zero = 0;
long long int var_15 = 445414060382479399LL;
short var_16 = (short)26922;
unsigned char var_17 = (unsigned char)176;
unsigned long long int var_18 = 14586098940658115045ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
