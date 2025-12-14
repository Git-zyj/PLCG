#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13836827878666685168ULL;
short var_4 = (short)-14311;
unsigned short var_5 = (unsigned short)36023;
signed char var_7 = (signed char)-9;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned int var_15 = 1743889810U;
int zero = 0;
unsigned int var_16 = 1139824080U;
_Bool var_17 = (_Bool)0;
long long int var_18 = 6291457384215553560LL;
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
