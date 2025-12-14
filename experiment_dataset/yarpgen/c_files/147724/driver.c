#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1836804225;
_Bool var_4 = (_Bool)0;
unsigned short var_8 = (unsigned short)8205;
unsigned short var_10 = (unsigned short)8512;
unsigned int var_13 = 982459366U;
unsigned char var_14 = (unsigned char)88;
short var_16 = (short)-20975;
int zero = 0;
short var_17 = (short)21246;
unsigned char var_18 = (unsigned char)198;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)62;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
