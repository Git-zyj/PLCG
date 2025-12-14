#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1719099921;
_Bool var_3 = (_Bool)0;
signed char var_7 = (signed char)-91;
signed char var_9 = (signed char)-65;
int zero = 0;
long long int var_11 = 6334877693946315415LL;
short var_12 = (short)21123;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-57;
signed char var_15 = (signed char)125;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
