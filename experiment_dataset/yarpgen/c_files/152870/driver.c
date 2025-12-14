#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = -4558237160902122178LL;
unsigned int var_3 = 2835090443U;
unsigned char var_4 = (unsigned char)26;
int var_5 = -253038433;
_Bool var_6 = (_Bool)1;
long long int var_7 = 1413295278043037119LL;
short var_8 = (short)-22873;
unsigned int var_10 = 4182872750U;
int var_11 = 1099634394;
int zero = 0;
short var_14 = (short)10979;
unsigned int var_15 = 466372873U;
int var_16 = 375614575;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
