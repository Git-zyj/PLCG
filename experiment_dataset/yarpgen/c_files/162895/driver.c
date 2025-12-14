#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)100;
unsigned short var_5 = (unsigned short)39375;
unsigned char var_6 = (unsigned char)42;
unsigned long long int var_7 = 9883658393389788398ULL;
long long int var_8 = -6077056082669506924LL;
short var_9 = (short)26550;
short var_11 = (short)-26803;
short var_12 = (short)-21809;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 18218055318145396736ULL;
int zero = 0;
short var_19 = (short)-11644;
long long int var_20 = -2747015322839131954LL;
short var_21 = (short)-8094;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
