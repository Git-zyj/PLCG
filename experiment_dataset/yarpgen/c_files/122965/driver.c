#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 617754664;
unsigned int var_5 = 3261824556U;
unsigned char var_6 = (unsigned char)67;
int var_8 = 2127472331;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2879441108U;
unsigned char var_12 = (unsigned char)187;
unsigned char var_13 = (unsigned char)176;
int zero = 0;
unsigned short var_14 = (unsigned short)62371;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)227;
unsigned short var_17 = (unsigned short)32589;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
