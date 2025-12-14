#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1076754045U;
unsigned int var_3 = 1038076366U;
signed char var_4 = (signed char)84;
signed char var_8 = (signed char)7;
int zero = 0;
unsigned short var_19 = (unsigned short)51975;
unsigned char var_20 = (unsigned char)92;
unsigned int var_21 = 1157962316U;
signed char var_22 = (signed char)81;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
