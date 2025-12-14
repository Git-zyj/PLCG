#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)61;
signed char var_1 = (signed char)110;
long long int var_3 = 2328747531570828270LL;
short var_6 = (short)-18768;
unsigned int var_13 = 2903915077U;
int zero = 0;
unsigned short var_16 = (unsigned short)31462;
unsigned int var_17 = 1328544119U;
int var_18 = -151207210;
long long int var_19 = -3268743696405121998LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
