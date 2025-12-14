#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1897043473U;
unsigned short var_4 = (unsigned short)20651;
_Bool var_5 = (_Bool)0;
long long int var_10 = -2297773100963565641LL;
long long int var_11 = -8484117478184957566LL;
long long int var_13 = -3574417313488698745LL;
int zero = 0;
short var_14 = (short)-3355;
int var_15 = -662081832;
_Bool var_16 = (_Bool)0;
int var_17 = 56869691;
int var_18 = 1394872833;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
