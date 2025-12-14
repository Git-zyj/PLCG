#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2501652879U;
unsigned int var_1 = 2167084258U;
unsigned int var_2 = 1440491513U;
unsigned int var_4 = 611810955U;
unsigned int var_6 = 4022253783U;
unsigned int var_7 = 1682023117U;
unsigned int var_8 = 1900546132U;
int zero = 0;
unsigned int var_11 = 3886670243U;
unsigned int var_12 = 2124452673U;
unsigned int var_13 = 4233869320U;
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
