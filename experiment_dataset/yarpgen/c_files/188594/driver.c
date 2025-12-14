#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2280947682U;
short var_2 = (short)14399;
unsigned char var_3 = (unsigned char)207;
unsigned char var_4 = (unsigned char)42;
signed char var_5 = (signed char)-122;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2906128639U;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 968112962U;
short var_13 = (short)-18987;
unsigned short var_14 = (unsigned short)25977;
int zero = 0;
unsigned char var_15 = (unsigned char)226;
signed char var_16 = (signed char)111;
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
