#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3543894242U;
unsigned char var_2 = (unsigned char)66;
unsigned int var_5 = 130172875U;
unsigned char var_6 = (unsigned char)172;
unsigned int var_12 = 3103541773U;
int zero = 0;
unsigned char var_15 = (unsigned char)178;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3607923098U;
unsigned int var_18 = 3766491486U;
unsigned char var_19 = (unsigned char)101;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
