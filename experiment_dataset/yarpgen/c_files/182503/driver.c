#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
int var_2 = 720162958;
long long int var_3 = -8637944981973887942LL;
unsigned char var_4 = (unsigned char)166;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 1977366275U;
short var_9 = (short)-9815;
short var_10 = (short)-9778;
int zero = 0;
unsigned short var_12 = (unsigned short)43908;
short var_13 = (short)7048;
unsigned short var_14 = (unsigned short)38945;
long long int var_15 = -7066481725740667644LL;
short var_16 = (short)-251;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
