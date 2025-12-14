#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1156253582;
_Bool var_3 = (_Bool)0;
int var_4 = -768318139;
_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 6159305766646277095ULL;
int var_13 = 1690623759;
long long int var_14 = -3465531277844800679LL;
int zero = 0;
signed char var_15 = (signed char)16;
unsigned short var_16 = (unsigned short)56332;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)34890;
void init() {
}

void checksum() {
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
