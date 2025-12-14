#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1596981575;
unsigned short var_2 = (unsigned short)1240;
int var_4 = -982206967;
int var_5 = 1788654964;
short var_6 = (short)-43;
int var_8 = -1581238830;
unsigned int var_10 = 1099576879U;
unsigned int var_11 = 3851213946U;
unsigned int var_15 = 2190600825U;
unsigned char var_16 = (unsigned char)223;
int zero = 0;
unsigned char var_19 = (unsigned char)62;
short var_20 = (short)-28218;
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
