#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
short var_3 = (short)2537;
int var_4 = -102590906;
short var_5 = (short)-22179;
short var_7 = (short)17046;
unsigned char var_8 = (unsigned char)10;
unsigned long long int var_9 = 608600599056516551ULL;
int zero = 0;
unsigned int var_10 = 1333802119U;
short var_11 = (short)11602;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
