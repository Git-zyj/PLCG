#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 76178306;
unsigned long long int var_6 = 14000063760410809955ULL;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)30374;
long long int var_12 = 3549759001772966137LL;
int zero = 0;
short var_13 = (short)-27591;
unsigned short var_14 = (unsigned short)2359;
unsigned int var_15 = 3112992U;
void init() {
}

void checksum() {
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
