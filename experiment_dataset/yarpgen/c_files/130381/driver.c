#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)160;
long long int var_6 = -6710349171880597028LL;
int var_7 = -1663799162;
short var_9 = (short)-17991;
unsigned short var_10 = (unsigned short)64926;
int zero = 0;
unsigned char var_12 = (unsigned char)200;
int var_13 = 1243376288;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
