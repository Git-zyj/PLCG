#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2007718241966046817LL;
int var_10 = -1464959746;
long long int var_11 = -4551667215336657969LL;
unsigned short var_12 = (unsigned short)24689;
unsigned int var_13 = 3689113001U;
int zero = 0;
unsigned int var_16 = 3701245181U;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)22096;
void init() {
}

void checksum() {
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
