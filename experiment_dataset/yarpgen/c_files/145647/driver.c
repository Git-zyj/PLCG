#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_7 = (unsigned char)43;
short var_9 = (short)19028;
unsigned long long int var_11 = 14240251612160146646ULL;
signed char var_15 = (signed char)-63;
int zero = 0;
unsigned int var_20 = 3750725827U;
unsigned short var_21 = (unsigned short)28259;
long long int var_22 = -1686115131734703340LL;
unsigned int var_23 = 4201420843U;
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
