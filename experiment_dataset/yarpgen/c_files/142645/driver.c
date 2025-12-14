#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_8 = (_Bool)0;
long long int var_9 = 6973519179007248361LL;
unsigned long long int var_10 = 3054910893054126826ULL;
int zero = 0;
int var_15 = 2080421438;
signed char var_16 = (signed char)-18;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
