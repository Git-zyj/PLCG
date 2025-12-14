#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2958557812U;
unsigned int var_5 = 436265429U;
unsigned char var_8 = (unsigned char)189;
short var_9 = (short)3198;
unsigned char var_10 = (unsigned char)93;
unsigned int var_11 = 3218348214U;
int zero = 0;
short var_13 = (short)3562;
unsigned char var_14 = (unsigned char)63;
void init() {
}

void checksum() {
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
