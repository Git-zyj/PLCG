#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 7518651218328232065ULL;
signed char var_3 = (signed char)-125;
short var_6 = (short)-14968;
_Bool var_7 = (_Bool)0;
int var_9 = -245075398;
signed char var_13 = (signed char)-81;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -2078557278;
long long int var_16 = -8848364996872506396LL;
short var_17 = (short)3969;
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
