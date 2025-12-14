#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2095974184;
long long int var_2 = 9162101953940146803LL;
short var_9 = (short)7390;
int zero = 0;
unsigned short var_15 = (unsigned short)6149;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)11693;
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
