#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2244813459U;
unsigned short var_4 = (unsigned short)42614;
unsigned short var_8 = (unsigned short)2696;
short var_12 = (short)15595;
_Bool var_13 = (_Bool)1;
unsigned int var_15 = 22503393U;
unsigned short var_18 = (unsigned short)58841;
unsigned short var_19 = (unsigned short)30920;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = 454697006;
unsigned short var_22 = (unsigned short)8901;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
