#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)59139;
int var_2 = 76132159;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3835474952U;
short var_6 = (short)-24369;
unsigned char var_7 = (unsigned char)25;
int var_8 = 1429885145;
short var_9 = (short)2246;
unsigned short var_11 = (unsigned short)11085;
unsigned short var_14 = (unsigned short)21165;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -363018509;
int var_18 = -1344969784;
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
