#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)43;
_Bool var_4 = (_Bool)1;
int var_5 = -1581624597;
unsigned long long int var_6 = 9477015469389341452ULL;
unsigned char var_11 = (unsigned char)212;
int var_12 = -1571556104;
int zero = 0;
short var_15 = (short)-10218;
int var_16 = 806532798;
unsigned char var_17 = (unsigned char)28;
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
