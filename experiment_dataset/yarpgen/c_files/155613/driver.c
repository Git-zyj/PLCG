#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2511606708U;
int var_6 = -1075621186;
short var_8 = (short)-22023;
signed char var_13 = (signed char)64;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_15 = -5220182948980543132LL;
int var_16 = -1042953563;
unsigned short var_17 = (unsigned short)4232;
unsigned short var_18 = (unsigned short)61048;
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
