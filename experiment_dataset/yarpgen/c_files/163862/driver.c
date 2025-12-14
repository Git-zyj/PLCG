#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)237;
short var_3 = (short)-6026;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 3074425257U;
unsigned long long int var_12 = 4325565452978568758ULL;
unsigned long long int var_13 = 11294185764442408830ULL;
int zero = 0;
short var_15 = (short)27286;
signed char var_16 = (signed char)50;
_Bool var_17 = (_Bool)0;
short var_18 = (short)394;
void init() {
}

void checksum() {
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
