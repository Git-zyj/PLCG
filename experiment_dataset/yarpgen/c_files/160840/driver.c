#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)195;
unsigned int var_2 = 4035710505U;
unsigned char var_3 = (unsigned char)28;
signed char var_5 = (signed char)109;
short var_6 = (short)-23356;
unsigned int var_9 = 369274750U;
int var_10 = -629873630;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 11964945016347832081ULL;
unsigned short var_15 = (unsigned short)35518;
int var_17 = 2098577213;
int zero = 0;
int var_19 = 1879334662;
unsigned char var_20 = (unsigned char)188;
unsigned long long int var_21 = 12119430208573671447ULL;
unsigned short var_22 = (unsigned short)21811;
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
