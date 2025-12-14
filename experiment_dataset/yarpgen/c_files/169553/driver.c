#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10890186795144295075ULL;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 954364577U;
unsigned short var_7 = (unsigned short)45775;
signed char var_8 = (signed char)-95;
unsigned char var_9 = (unsigned char)127;
unsigned int var_10 = 3523831016U;
unsigned long long int var_11 = 11184112560656357596ULL;
unsigned char var_12 = (unsigned char)136;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)50;
long long int var_15 = -5429553859613059059LL;
int zero = 0;
short var_16 = (short)1075;
unsigned short var_17 = (unsigned short)21683;
unsigned short var_18 = (unsigned short)38657;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
