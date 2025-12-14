#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1517340628U;
long long int var_5 = -7454817636772675795LL;
unsigned short var_6 = (unsigned short)48118;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 7438380986878184390ULL;
short var_12 = (short)-17744;
int var_15 = 1694877984;
int zero = 0;
int var_16 = 1257636523;
unsigned long long int var_17 = 10429309263959606802ULL;
unsigned int var_18 = 960406776U;
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
