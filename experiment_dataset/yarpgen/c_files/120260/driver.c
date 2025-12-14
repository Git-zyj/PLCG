#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3304400746U;
int var_2 = -1605463275;
_Bool var_3 = (_Bool)1;
int var_4 = -245080365;
unsigned short var_5 = (unsigned short)24569;
long long int var_7 = -6922512300115132625LL;
int var_8 = 2098055282;
int zero = 0;
int var_10 = -1618028747;
int var_11 = 2107571140;
unsigned int var_12 = 2901134471U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
