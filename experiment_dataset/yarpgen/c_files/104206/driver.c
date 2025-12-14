#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58702;
unsigned int var_5 = 249473082U;
_Bool var_6 = (_Bool)1;
int var_7 = -1275417736;
int var_12 = 1894446136;
int zero = 0;
unsigned int var_14 = 1270828140U;
long long int var_15 = 5108984374724821148LL;
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
