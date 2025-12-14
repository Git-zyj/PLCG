#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31754;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned char var_7 = (unsigned char)135;
short var_8 = (short)11284;
unsigned char var_10 = (unsigned char)230;
short var_11 = (short)24067;
unsigned char var_12 = (unsigned char)92;
unsigned short var_15 = (unsigned short)27066;
int zero = 0;
unsigned char var_16 = (unsigned char)23;
unsigned int var_17 = 3034210821U;
unsigned int var_18 = 1493371876U;
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
