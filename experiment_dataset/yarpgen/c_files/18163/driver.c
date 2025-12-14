#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1571542521U;
signed char var_4 = (signed char)-19;
signed char var_7 = (signed char)59;
unsigned int var_12 = 3733690806U;
unsigned short var_14 = (unsigned short)18257;
int zero = 0;
unsigned char var_16 = (unsigned char)254;
unsigned char var_17 = (unsigned char)149;
unsigned short var_18 = (unsigned short)56231;
unsigned short var_19 = (unsigned short)8789;
signed char var_20 = (signed char)6;
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
