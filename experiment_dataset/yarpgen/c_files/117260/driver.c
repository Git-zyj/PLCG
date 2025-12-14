#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11819137460011702177ULL;
short var_5 = (short)1379;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 10885829616934235ULL;
unsigned char var_10 = (unsigned char)33;
unsigned long long int var_11 = 17214874835390438950ULL;
unsigned char var_12 = (unsigned char)56;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)-102;
short var_15 = (short)-32761;
unsigned int var_16 = 4010776892U;
unsigned char var_17 = (unsigned char)11;
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
