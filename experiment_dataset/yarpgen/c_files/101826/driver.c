#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)23352;
signed char var_4 = (signed char)69;
unsigned short var_7 = (unsigned short)38306;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)34432;
unsigned int var_13 = 432928821U;
unsigned char var_14 = (unsigned char)213;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
