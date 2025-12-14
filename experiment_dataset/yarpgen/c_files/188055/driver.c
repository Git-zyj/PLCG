#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-32;
signed char var_2 = (signed char)73;
signed char var_3 = (signed char)-94;
unsigned long long int var_6 = 14269048978296861425ULL;
int var_7 = -778728680;
unsigned char var_9 = (unsigned char)100;
unsigned int var_15 = 914925871U;
unsigned char var_16 = (unsigned char)16;
short var_17 = (short)-12211;
int var_19 = 1588928338;
int zero = 0;
int var_20 = 779337775;
int var_21 = 1249106764;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
