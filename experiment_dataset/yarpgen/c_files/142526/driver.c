#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)101;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 2945805550U;
unsigned char var_8 = (unsigned char)65;
unsigned short var_10 = (unsigned short)62555;
unsigned int var_11 = 1744587303U;
short var_12 = (short)-15542;
unsigned int var_13 = 3686696843U;
int zero = 0;
unsigned short var_14 = (unsigned short)60373;
unsigned char var_15 = (unsigned char)15;
unsigned int var_16 = 648486621U;
unsigned int var_17 = 3958169988U;
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
