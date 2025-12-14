#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25889;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)170;
unsigned char var_6 = (unsigned char)42;
long long int var_7 = -8769361803043781447LL;
unsigned short var_10 = (unsigned short)23557;
long long int var_11 = -5098396372862760214LL;
unsigned int var_12 = 4269753083U;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)172;
unsigned short var_16 = (unsigned short)18603;
int zero = 0;
short var_17 = (short)-7404;
long long int var_18 = 8902872159476840518LL;
unsigned char var_19 = (unsigned char)69;
unsigned char var_20 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
