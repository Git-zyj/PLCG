#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)18;
unsigned int var_2 = 3351226031U;
int var_3 = -922750641;
unsigned long long int var_7 = 4757874891856417210ULL;
long long int var_10 = -2780947224214197746LL;
short var_13 = (short)9518;
short var_14 = (short)30755;
unsigned int var_16 = 3565021367U;
int zero = 0;
short var_20 = (short)5762;
unsigned int var_21 = 1050585595U;
short var_22 = (short)7979;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
