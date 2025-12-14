#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 4215354017576861184ULL;
long long int var_4 = -989288553787784114LL;
short var_7 = (short)2206;
long long int var_8 = -8559654378368343242LL;
short var_10 = (short)26704;
unsigned long long int var_12 = 2949889290857098096ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)52549;
int var_14 = -7577565;
short var_15 = (short)-7545;
int var_16 = 1211000351;
signed char var_17 = (signed char)22;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
