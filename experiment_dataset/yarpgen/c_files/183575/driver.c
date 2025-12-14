#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2572091921U;
short var_3 = (short)-26554;
_Bool var_7 = (_Bool)0;
signed char var_12 = (signed char)121;
signed char var_14 = (signed char)126;
unsigned short var_15 = (unsigned short)60710;
unsigned short var_17 = (unsigned short)5707;
int zero = 0;
int var_18 = -1822501889;
unsigned int var_19 = 3312615377U;
int var_20 = 658444503;
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
