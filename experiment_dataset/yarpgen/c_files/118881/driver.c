#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 627664659U;
long long int var_4 = -4977267253794332910LL;
_Bool var_7 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_14 = 924513197701134156ULL;
long long int var_16 = 3414326777420768017LL;
int zero = 0;
long long int var_20 = 4603071587739891357LL;
unsigned short var_21 = (unsigned short)56697;
short var_22 = (short)-23023;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
