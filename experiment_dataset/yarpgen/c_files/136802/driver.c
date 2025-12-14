#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 176953216331609790ULL;
long long int var_1 = 173791787509189935LL;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 395760239U;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 1506402700U;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)15344;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
