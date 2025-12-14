#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3947258207U;
unsigned char var_1 = (unsigned char)59;
unsigned short var_7 = (unsigned short)19371;
unsigned int var_11 = 2485199444U;
int zero = 0;
unsigned short var_14 = (unsigned short)58684;
unsigned int var_15 = 936381969U;
void init() {
}

void checksum() {
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
