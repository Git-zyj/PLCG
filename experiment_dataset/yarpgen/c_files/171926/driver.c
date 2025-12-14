#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
long long int var_3 = 309281133309415725LL;
unsigned int var_4 = 1620488010U;
unsigned short var_6 = (unsigned short)57284;
long long int var_8 = -4974044929934011992LL;
int zero = 0;
short var_10 = (short)3887;
int var_11 = 2010921654;
unsigned int var_12 = 488960692U;
int var_13 = 1190525552;
unsigned int var_14 = 435817711U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
