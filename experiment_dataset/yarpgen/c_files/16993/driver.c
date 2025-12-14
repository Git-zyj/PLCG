#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)11312;
signed char var_2 = (signed char)-106;
signed char var_3 = (signed char)-99;
short var_4 = (short)32351;
unsigned short var_6 = (unsigned short)29499;
unsigned short var_8 = (unsigned short)18006;
unsigned short var_14 = (unsigned short)13140;
int zero = 0;
short var_15 = (short)-13660;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)216;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
