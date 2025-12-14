#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 4041682247433633715ULL;
unsigned short var_7 = (unsigned short)5876;
int var_10 = -2116904375;
unsigned int var_11 = 2600226150U;
unsigned char var_13 = (unsigned char)234;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1010188184U;
signed char var_18 = (signed char)1;
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
