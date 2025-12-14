#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = 1986962446;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
short var_8 = (short)-8296;
unsigned long long int var_10 = 17477886546079294391ULL;
unsigned long long int var_11 = 10965470496975217854ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)16328;
unsigned char var_16 = (unsigned char)92;
void init() {
}

void checksum() {
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
