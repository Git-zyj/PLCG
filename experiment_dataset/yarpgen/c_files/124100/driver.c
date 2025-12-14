#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)10045;
unsigned int var_5 = 1546099938U;
unsigned short var_6 = (unsigned short)24762;
unsigned long long int var_11 = 12080892965862300382ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -1503416836199084507LL;
short var_14 = (short)-31247;
unsigned int var_15 = 1170706656U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
