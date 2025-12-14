#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_3 = 12664973254757459498ULL;
int var_5 = -1380800851;
unsigned long long int var_6 = 15510999690536702796ULL;
unsigned int var_7 = 3063744233U;
int var_9 = 422532131;
int zero = 0;
unsigned long long int var_12 = 13211965582819180348ULL;
unsigned int var_13 = 3518803720U;
unsigned int var_14 = 3554776102U;
short var_15 = (short)9697;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
