#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2259540693U;
unsigned char var_10 = (unsigned char)46;
long long int var_11 = -3840455286856748137LL;
_Bool var_15 = (_Bool)1;
short var_16 = (short)4213;
long long int var_17 = 1675396427292359233LL;
int zero = 0;
unsigned char var_19 = (unsigned char)47;
unsigned short var_20 = (unsigned short)57319;
short var_21 = (short)-13477;
int var_22 = -1706089350;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
