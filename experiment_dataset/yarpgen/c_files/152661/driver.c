#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8669046935706637518LL;
unsigned long long int var_1 = 3852782981338710020ULL;
unsigned int var_5 = 1855709871U;
short var_8 = (short)-13344;
short var_14 = (short)-6853;
unsigned short var_16 = (unsigned short)17186;
short var_19 = (short)-2399;
int zero = 0;
short var_20 = (short)-16314;
_Bool var_21 = (_Bool)0;
int var_22 = 1831852969;
unsigned int var_23 = 3830330893U;
unsigned short var_24 = (unsigned short)17627;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
