#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 8929834678087354767ULL;
int var_6 = -1414474334;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)107;
unsigned short var_12 = (unsigned short)51991;
short var_14 = (short)-7221;
int zero = 0;
unsigned short var_18 = (unsigned short)7452;
unsigned char var_19 = (unsigned char)70;
unsigned int var_20 = 700554835U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
