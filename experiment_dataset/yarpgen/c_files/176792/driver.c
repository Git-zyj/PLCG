#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)56;
unsigned char var_4 = (unsigned char)254;
int var_7 = -1651597276;
unsigned short var_9 = (unsigned short)24683;
unsigned int var_10 = 2634418838U;
_Bool var_14 = (_Bool)0;
unsigned int var_16 = 187232829U;
unsigned long long int var_18 = 13554557973970465412ULL;
int var_19 = -512751520;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 907838372;
short var_22 = (short)-14498;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
