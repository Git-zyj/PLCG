#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64185;
short var_4 = (short)-6490;
unsigned int var_11 = 2959716111U;
int var_17 = 1985866798;
int zero = 0;
unsigned char var_20 = (unsigned char)243;
short var_21 = (short)-12607;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)30;
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
