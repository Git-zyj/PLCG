#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1748;
unsigned int var_2 = 2378022120U;
unsigned char var_6 = (unsigned char)214;
int var_7 = 2006952248;
short var_8 = (short)-12681;
unsigned char var_13 = (unsigned char)18;
short var_14 = (short)-16081;
int zero = 0;
long long int var_17 = -1994697438713042002LL;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)199;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)37306;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
