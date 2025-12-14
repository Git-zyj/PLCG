#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26330;
short var_1 = (short)20066;
_Bool var_2 = (_Bool)0;
long long int var_4 = 9185788181562878391LL;
short var_5 = (short)23378;
signed char var_6 = (signed char)45;
unsigned int var_7 = 3241144227U;
signed char var_8 = (signed char)37;
_Bool var_9 = (_Bool)0;
int var_11 = 1120613377;
unsigned char var_12 = (unsigned char)248;
int var_13 = -893287213;
int zero = 0;
signed char var_14 = (signed char)93;
unsigned short var_15 = (unsigned short)21106;
unsigned short var_16 = (unsigned short)46277;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
