#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)216;
short var_1 = (short)-18978;
unsigned short var_2 = (unsigned short)29449;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 2525505562U;
long long int var_5 = 8368424023353817436LL;
int var_6 = 1637545771;
_Bool var_8 = (_Bool)1;
int var_9 = 1868276535;
int zero = 0;
short var_10 = (short)-13306;
int var_11 = -688212906;
int var_12 = -55721364;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
