#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_9 = (short)-6977;
long long int var_10 = -3311275058339416035LL;
int zero = 0;
long long int var_15 = 7976562725739063021LL;
short var_16 = (short)28209;
signed char var_17 = (signed char)-16;
void init() {
}

void checksum() {
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
