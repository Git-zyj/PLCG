#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)133;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)48;
short var_8 = (short)-24874;
signed char var_11 = (signed char)45;
signed char var_13 = (signed char)-79;
unsigned int var_14 = 992988632U;
int zero = 0;
unsigned char var_15 = (unsigned char)112;
unsigned int var_16 = 3518908228U;
void init() {
}

void checksum() {
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
