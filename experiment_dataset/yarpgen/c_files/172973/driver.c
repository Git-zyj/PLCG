#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)13;
long long int var_9 = -815011161108627621LL;
unsigned char var_10 = (unsigned char)253;
unsigned char var_12 = (unsigned char)53;
int zero = 0;
long long int var_14 = 6372739183610295371LL;
int var_15 = 1797513888;
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
