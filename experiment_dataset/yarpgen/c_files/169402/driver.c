#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)250;
short var_3 = (short)-32721;
unsigned long long int var_5 = 6994922867714698376ULL;
int var_6 = -1356059273;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)58;
unsigned short var_11 = (unsigned short)49537;
unsigned char var_12 = (unsigned char)9;
unsigned long long int var_13 = 474768944763722239ULL;
unsigned short var_14 = (unsigned short)54714;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
