#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1675265687U;
unsigned short var_1 = (unsigned short)59129;
short var_10 = (short)-5450;
int zero = 0;
unsigned int var_12 = 156498210U;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)42;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
