#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1656172062U;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)113;
unsigned short var_10 = (unsigned short)10803;
_Bool var_11 = (_Bool)1;
int var_12 = -1206171769;
int var_13 = 792899482;
_Bool var_14 = (_Bool)1;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 5989962395263660966ULL;
long long int var_21 = -4672871986710936942LL;
unsigned short var_22 = (unsigned short)47419;
unsigned int var_23 = 2429648183U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
