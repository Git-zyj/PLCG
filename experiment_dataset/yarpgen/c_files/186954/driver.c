#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)133;
unsigned long long int var_6 = 18269806647646902884ULL;
unsigned short var_9 = (unsigned short)36930;
int var_10 = -1434131430;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_13 = -255462668;
unsigned int var_14 = 1855560091U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
