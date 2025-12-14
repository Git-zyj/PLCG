#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30825;
unsigned int var_1 = 477838173U;
unsigned long long int var_2 = 11549507972228255056ULL;
long long int var_4 = 1695046193513965199LL;
unsigned char var_7 = (unsigned char)161;
signed char var_8 = (signed char)-40;
short var_12 = (short)3863;
int zero = 0;
unsigned long long int var_14 = 1991586489012660068ULL;
long long int var_15 = -2396478510973420765LL;
signed char var_16 = (signed char)-92;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
