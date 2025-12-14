#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -2078878467454857505LL;
unsigned char var_2 = (unsigned char)5;
unsigned long long int var_4 = 2426459450316483642ULL;
unsigned char var_5 = (unsigned char)174;
_Bool var_7 = (_Bool)0;
int zero = 0;
long long int var_12 = -2872696527446391121LL;
unsigned long long int var_13 = 12635290858118966533ULL;
long long int var_14 = 1801967288450278196LL;
short var_15 = (short)16384;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
