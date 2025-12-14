#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1105305550;
_Bool var_1 = (_Bool)1;
unsigned int var_4 = 1826920101U;
unsigned int var_5 = 3924899346U;
unsigned short var_6 = (unsigned short)37840;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2998061091U;
unsigned int var_10 = 3235107254U;
int var_11 = 145091760;
unsigned int var_12 = 3632478980U;
signed char var_13 = (signed char)-24;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)-28;
int var_16 = -237378448;
unsigned char var_17 = (unsigned char)229;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-12800;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
