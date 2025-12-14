#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-5428;
short var_8 = (short)-689;
unsigned int var_9 = 426810974U;
unsigned long long int var_10 = 12117034544975954493ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)202;
unsigned int var_13 = 1650456709U;
int var_14 = 1874601936;
short var_15 = (short)12964;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
