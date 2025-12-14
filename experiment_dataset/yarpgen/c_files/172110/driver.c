#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 677849832U;
unsigned int var_6 = 2411797449U;
unsigned char var_10 = (unsigned char)3;
int zero = 0;
unsigned char var_15 = (unsigned char)233;
unsigned char var_16 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
