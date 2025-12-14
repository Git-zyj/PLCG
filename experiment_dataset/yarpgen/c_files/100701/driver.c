#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 405464117;
short var_5 = (short)-15711;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_17 = -4446699201366995587LL;
unsigned int var_18 = 2167668827U;
signed char var_19 = (signed char)93;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
