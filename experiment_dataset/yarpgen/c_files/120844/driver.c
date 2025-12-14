#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_4 = (unsigned char)123;
unsigned long long int var_8 = 8271324122009766832ULL;
unsigned short var_10 = (unsigned short)36848;
unsigned long long int var_13 = 4077804580419876352ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)99;
_Bool var_15 = (_Bool)0;
int var_16 = -304181720;
unsigned short var_17 = (unsigned short)7119;
short var_18 = (short)-26156;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
