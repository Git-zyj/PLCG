#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_3 = 1825185222U;
signed char var_4 = (signed char)117;
short var_5 = (short)23564;
unsigned int var_6 = 2462386266U;
unsigned short var_11 = (unsigned short)31979;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 3722834655U;
unsigned int var_14 = 2040367467U;
unsigned char var_15 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
