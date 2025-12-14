#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6989738017429315698LL;
short var_1 = (short)23579;
unsigned int var_2 = 2659169350U;
unsigned int var_9 = 1297565027U;
_Bool var_12 = (_Bool)0;
int var_14 = -1683545651;
int var_15 = -221841933;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = 890268286;
short var_18 = (short)-11544;
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
