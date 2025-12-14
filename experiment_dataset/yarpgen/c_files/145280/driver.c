#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2725;
unsigned int var_4 = 1604834757U;
unsigned int var_6 = 3390708574U;
unsigned short var_7 = (unsigned short)42862;
unsigned int var_8 = 2044499818U;
signed char var_15 = (signed char)-43;
int zero = 0;
unsigned short var_16 = (unsigned short)5260;
unsigned short var_17 = (unsigned short)36938;
unsigned int var_18 = 2111509809U;
unsigned int var_19 = 1809736210U;
unsigned short var_20 = (unsigned short)6007;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
