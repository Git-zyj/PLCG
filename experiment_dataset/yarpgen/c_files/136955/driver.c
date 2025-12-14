#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 949120201U;
long long int var_6 = -4526912134297852070LL;
unsigned int var_10 = 2003934522U;
int zero = 0;
unsigned char var_12 = (unsigned char)232;
unsigned int var_13 = 541270747U;
void init() {
}

void checksum() {
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
