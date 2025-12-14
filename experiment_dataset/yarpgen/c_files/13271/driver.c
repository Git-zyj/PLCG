#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)16;
unsigned char var_2 = (unsigned char)144;
unsigned int var_6 = 1587108310U;
unsigned int var_9 = 2290750272U;
unsigned int var_11 = 44383446U;
int zero = 0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-122;
unsigned short var_16 = (unsigned short)33071;
unsigned short var_17 = (unsigned short)39885;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
