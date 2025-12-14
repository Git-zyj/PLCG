#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)29373;
signed char var_6 = (signed char)-12;
unsigned short var_7 = (unsigned short)55247;
_Bool var_8 = (_Bool)1;
long long int var_10 = -7504528839938538719LL;
unsigned long long int var_14 = 9704543783948957182ULL;
short var_16 = (short)-32681;
int zero = 0;
long long int var_17 = -6536689849682794225LL;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)48703;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
