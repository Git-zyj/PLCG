#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)219;
short var_5 = (short)12091;
unsigned short var_11 = (unsigned short)39724;
long long int var_12 = 8806129473538802207LL;
int zero = 0;
signed char var_13 = (signed char)-1;
unsigned int var_14 = 3110875026U;
unsigned long long int var_15 = 1827985726722433823ULL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-11923;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
