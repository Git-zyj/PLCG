#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -717136380;
_Bool var_2 = (_Bool)0;
short var_3 = (short)11118;
short var_4 = (short)-15768;
unsigned int var_5 = 563095565U;
short var_7 = (short)-5887;
int zero = 0;
unsigned int var_11 = 2447083315U;
long long int var_12 = -6241242070250515571LL;
signed char var_13 = (signed char)-22;
unsigned char var_14 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
