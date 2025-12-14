#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 620579051U;
unsigned char var_9 = (unsigned char)72;
short var_11 = (short)-27872;
unsigned char var_12 = (unsigned char)76;
int zero = 0;
unsigned char var_14 = (unsigned char)107;
short var_15 = (short)-9836;
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
