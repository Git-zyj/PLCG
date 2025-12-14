#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49126;
int var_1 = -322599867;
signed char var_4 = (signed char)95;
_Bool var_5 = (_Bool)1;
unsigned long long int var_12 = 3105686164562520875ULL;
signed char var_14 = (signed char)87;
int zero = 0;
long long int var_16 = -3757638126850689251LL;
long long int var_17 = -8683411811395040611LL;
void init() {
}

void checksum() {
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
