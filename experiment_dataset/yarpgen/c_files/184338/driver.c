#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1211073075U;
long long int var_4 = -1400615089828575916LL;
short var_5 = (short)-11455;
unsigned short var_6 = (unsigned short)23383;
unsigned int var_8 = 3285602180U;
long long int var_11 = -4205786519681531618LL;
unsigned short var_12 = (unsigned short)14480;
int zero = 0;
int var_13 = 1076295248;
short var_14 = (short)-12204;
short var_15 = (short)1597;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
