#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)36870;
signed char var_8 = (signed char)-124;
unsigned char var_11 = (unsigned char)139;
short var_14 = (short)8248;
unsigned short var_15 = (unsigned short)45790;
int zero = 0;
unsigned short var_16 = (unsigned short)60369;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)140;
short var_19 = (short)-6703;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
