#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1123795114U;
unsigned long long int var_4 = 7904744443338130208ULL;
unsigned short var_11 = (unsigned short)56122;
_Bool var_12 = (_Bool)1;
long long int var_14 = 2386873855035537603LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2361027208U;
unsigned int var_17 = 3466325486U;
void init() {
}

void checksum() {
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
