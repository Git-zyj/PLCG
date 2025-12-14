#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29765;
unsigned long long int var_4 = 493577579164637591ULL;
long long int var_6 = -195260003791959636LL;
unsigned long long int var_7 = 17830821736783471433ULL;
signed char var_9 = (signed char)41;
unsigned short var_11 = (unsigned short)7563;
int var_16 = 2013605244;
int zero = 0;
unsigned short var_17 = (unsigned short)26642;
unsigned short var_18 = (unsigned short)13938;
unsigned int var_19 = 1331987497U;
unsigned short var_20 = (unsigned short)22610;
unsigned char var_21 = (unsigned char)71;
signed char var_22 = (signed char)-76;
unsigned short var_23 = (unsigned short)64600;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
