#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)95;
int var_3 = 477889719;
int var_6 = -984150122;
unsigned char var_10 = (unsigned char)215;
int zero = 0;
unsigned char var_11 = (unsigned char)42;
unsigned long long int var_12 = 9192521835005990356ULL;
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
