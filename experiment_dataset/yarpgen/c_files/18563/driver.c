#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_4 = (short)14909;
unsigned short var_6 = (unsigned short)29961;
int var_10 = -1792885031;
short var_12 = (short)16500;
int zero = 0;
int var_14 = 1304893239;
unsigned int var_15 = 2858219692U;
void init() {
}

void checksum() {
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
