#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2709790508U;
signed char var_2 = (signed char)54;
int var_5 = -1615537230;
short var_12 = (short)-25961;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
long long int var_17 = 2394987374879599715LL;
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
