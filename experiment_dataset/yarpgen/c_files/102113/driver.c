#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2029413703252766438ULL;
signed char var_2 = (signed char)-126;
_Bool var_3 = (_Bool)0;
unsigned long long int var_8 = 7277284338166936767ULL;
signed char var_10 = (signed char)-86;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-12;
unsigned short var_15 = (unsigned short)47848;
int zero = 0;
unsigned short var_16 = (unsigned short)20303;
short var_17 = (short)19378;
unsigned long long int var_18 = 15036048265072161053ULL;
void init() {
}

void checksum() {
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
