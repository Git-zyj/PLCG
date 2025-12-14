#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
_Bool var_7 = (_Bool)1;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_17 = (short)-28901;
short var_18 = (short)-20053;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
