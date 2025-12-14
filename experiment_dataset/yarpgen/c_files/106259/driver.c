#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62683;
short var_2 = (short)-920;
unsigned int var_3 = 1910314070U;
unsigned long long int var_4 = 17794775923197803422ULL;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)56990;
unsigned short var_8 = (unsigned short)13527;
unsigned int var_9 = 4230122617U;
int zero = 0;
short var_12 = (short)1508;
unsigned int var_13 = 1932755345U;
unsigned int var_14 = 2520056613U;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)48;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
