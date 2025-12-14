#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)-83;
unsigned int var_3 = 1643374995U;
unsigned int var_4 = 3518247707U;
int var_5 = -1798107490;
int var_8 = -480369375;
unsigned long long int var_9 = 8278661522767368651ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2413609898U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
