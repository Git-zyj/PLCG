#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3509030793U;
int var_1 = -529923409;
short var_3 = (short)9845;
int zero = 0;
unsigned short var_11 = (unsigned short)28271;
unsigned short var_12 = (unsigned short)36989;
unsigned int var_13 = 1999260218U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
