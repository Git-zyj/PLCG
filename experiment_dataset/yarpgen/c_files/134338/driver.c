#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63743;
_Bool var_3 = (_Bool)1;
signed char var_6 = (signed char)22;
signed char var_7 = (signed char)-122;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_11 = 984298485;
unsigned long long int var_12 = 33980269310197795ULL;
short var_13 = (short)2854;
long long int var_14 = 8196704338569404398LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
