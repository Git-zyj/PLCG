#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21593;
short var_2 = (short)9506;
unsigned char var_3 = (unsigned char)32;
short var_6 = (short)-16583;
unsigned long long int var_7 = 1486736422417019566ULL;
unsigned long long int var_11 = 3219723377628436668ULL;
int zero = 0;
short var_13 = (short)-10341;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)112;
unsigned short var_16 = (unsigned short)45214;
unsigned char var_17 = (unsigned char)199;
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
