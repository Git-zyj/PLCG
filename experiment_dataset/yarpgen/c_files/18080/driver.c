#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 784648495U;
unsigned short var_2 = (unsigned short)21595;
_Bool var_6 = (_Bool)0;
long long int var_8 = 7239033908789865353LL;
int zero = 0;
long long int var_13 = -3157782536554098261LL;
long long int var_14 = 42318162194358947LL;
short var_15 = (short)12418;
unsigned long long int var_16 = 5212900237379323928ULL;
int var_17 = -354069054;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
