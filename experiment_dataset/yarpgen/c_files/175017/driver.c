#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_4 = (unsigned short)64670;
short var_5 = (short)-24869;
unsigned char var_13 = (unsigned char)115;
unsigned short var_14 = (unsigned short)11782;
unsigned int var_15 = 3248239134U;
unsigned char var_17 = (unsigned char)160;
int zero = 0;
short var_19 = (short)3907;
unsigned short var_20 = (unsigned short)48401;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
