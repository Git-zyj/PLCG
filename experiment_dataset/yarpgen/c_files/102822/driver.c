#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)3;
unsigned int var_5 = 2680600397U;
unsigned char var_7 = (unsigned char)95;
unsigned int var_10 = 116490152U;
unsigned char var_12 = (unsigned char)135;
unsigned char var_14 = (unsigned char)59;
int zero = 0;
unsigned int var_16 = 2579144843U;
unsigned char var_17 = (unsigned char)185;
unsigned int var_18 = 3369973541U;
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
