#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)58;
unsigned char var_3 = (unsigned char)30;
signed char var_4 = (signed char)92;
signed char var_5 = (signed char)87;
signed char var_6 = (signed char)72;
unsigned char var_7 = (unsigned char)65;
int var_9 = 31828532;
unsigned int var_10 = 397071608U;
int zero = 0;
unsigned int var_11 = 4031915164U;
unsigned int var_12 = 252828689U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
