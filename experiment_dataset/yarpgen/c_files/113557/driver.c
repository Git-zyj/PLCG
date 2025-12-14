#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2413;
long long int var_1 = -8133762905218163533LL;
unsigned short var_4 = (unsigned short)12657;
unsigned short var_5 = (unsigned short)61613;
unsigned short var_7 = (unsigned short)59279;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
signed char var_15 = (signed char)86;
unsigned short var_16 = (unsigned short)37584;
int zero = 0;
unsigned int var_19 = 950977848U;
signed char var_20 = (signed char)-47;
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
