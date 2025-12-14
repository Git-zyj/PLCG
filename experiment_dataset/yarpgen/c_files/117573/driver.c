#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 670790229;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 3979019556987320393ULL;
signed char var_12 = (signed char)20;
unsigned int var_15 = 4263001001U;
unsigned char var_18 = (unsigned char)42;
int zero = 0;
unsigned short var_19 = (unsigned short)43037;
short var_20 = (short)-32268;
unsigned short var_21 = (unsigned short)20315;
unsigned int var_22 = 2970443036U;
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
