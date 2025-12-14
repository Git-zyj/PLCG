#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5755;
_Bool var_1 = (_Bool)0;
short var_3 = (short)-589;
short var_6 = (short)7014;
short var_8 = (short)-1742;
long long int var_10 = -7715529994636585428LL;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)16;
long long int var_15 = 3216973241694821295LL;
int zero = 0;
short var_16 = (short)-32372;
long long int var_17 = -9176162029265433398LL;
long long int var_18 = 7847930627213112123LL;
short var_19 = (short)20120;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
