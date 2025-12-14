#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_5 = 6897833118197845302LL;
signed char var_7 = (signed char)-109;
_Bool var_8 = (_Bool)1;
long long int var_9 = 3701079666449316389LL;
signed char var_12 = (signed char)64;
int zero = 0;
unsigned int var_18 = 1416486763U;
long long int var_19 = -7951971049760642444LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
