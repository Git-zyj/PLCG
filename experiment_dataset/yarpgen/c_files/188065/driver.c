#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3390489576U;
unsigned char var_6 = (unsigned char)75;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)31659;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2042560295U;
int zero = 0;
short var_12 = (short)-12950;
short var_13 = (short)-935;
unsigned char var_14 = (unsigned char)175;
unsigned int var_15 = 1492655683U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
