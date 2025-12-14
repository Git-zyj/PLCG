#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1695239873U;
int var_3 = -559324656;
short var_4 = (short)5832;
unsigned int var_6 = 4041297205U;
long long int var_9 = -5294807248156884003LL;
unsigned int var_11 = 3675189662U;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)185;
void init() {
}

void checksum() {
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
