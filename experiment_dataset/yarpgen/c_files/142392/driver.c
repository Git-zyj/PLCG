#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1930550897;
int var_5 = -2096934575;
unsigned char var_7 = (unsigned char)35;
unsigned int var_10 = 1166242782U;
short var_13 = (short)-3912;
unsigned int var_14 = 3624202239U;
signed char var_15 = (signed char)-76;
int var_16 = -746606190;
unsigned int var_17 = 3460980897U;
int zero = 0;
unsigned short var_19 = (unsigned short)34285;
unsigned int var_20 = 3003721245U;
unsigned long long int var_21 = 6105692807946385107ULL;
signed char var_22 = (signed char)100;
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
