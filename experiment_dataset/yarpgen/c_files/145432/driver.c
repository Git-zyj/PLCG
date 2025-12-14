#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 889094172;
int var_5 = -1416571319;
int var_6 = 1135614794;
long long int var_10 = -6176366855070485820LL;
short var_14 = (short)24696;
int var_15 = 1532011721;
int zero = 0;
unsigned int var_16 = 2938289497U;
short var_17 = (short)28194;
unsigned int var_18 = 1681179374U;
void init() {
}

void checksum() {
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
