#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -69434145;
unsigned int var_2 = 3970770914U;
short var_3 = (short)30360;
short var_4 = (short)-25075;
unsigned int var_5 = 4278204115U;
unsigned int var_6 = 765617098U;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2742275926U;
unsigned char var_12 = (unsigned char)188;
long long int var_13 = -3980684485567822816LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)28530;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
