#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
int var_8 = -571255154;
int var_10 = -187468740;
int zero = 0;
signed char var_11 = (signed char)-81;
_Bool var_12 = (_Bool)0;
long long int var_13 = 558076979073741237LL;
unsigned short var_14 = (unsigned short)62357;
unsigned short var_15 = (unsigned short)15571;
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
