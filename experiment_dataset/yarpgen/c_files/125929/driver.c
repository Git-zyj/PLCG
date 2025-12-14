#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3903288440U;
unsigned char var_4 = (unsigned char)53;
unsigned char var_8 = (unsigned char)230;
unsigned char var_10 = (unsigned char)44;
int zero = 0;
int var_11 = -774232852;
short var_12 = (short)6483;
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
