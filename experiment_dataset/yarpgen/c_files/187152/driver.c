#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-30;
long long int var_3 = 5050076879910011620LL;
unsigned short var_7 = (unsigned short)40726;
signed char var_8 = (signed char)23;
short var_9 = (short)-12627;
unsigned int var_11 = 379119394U;
unsigned long long int var_12 = 16068295662962649475ULL;
unsigned short var_13 = (unsigned short)8873;
int zero = 0;
int var_14 = 759238777;
unsigned long long int var_15 = 2744556902715672188ULL;
unsigned long long int var_16 = 6979703383199364346ULL;
long long int var_17 = 4001240673553920472LL;
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
