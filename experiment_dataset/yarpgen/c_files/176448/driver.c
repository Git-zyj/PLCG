#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 4012008155U;
unsigned char var_4 = (unsigned char)102;
unsigned char var_6 = (unsigned char)143;
unsigned int var_8 = 2568825228U;
unsigned short var_10 = (unsigned short)42875;
long long int var_13 = 3658696753457211353LL;
unsigned int var_14 = 1870532407U;
unsigned int var_17 = 1307974919U;
long long int var_19 = 3675209143645187326LL;
int zero = 0;
unsigned int var_20 = 1699094037U;
unsigned long long int var_21 = 12778684658734883647ULL;
int var_22 = -378969235;
unsigned char var_23 = (unsigned char)236;
short var_24 = (short)-7566;
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
