#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)103;
unsigned char var_3 = (unsigned char)59;
unsigned char var_4 = (unsigned char)218;
unsigned char var_10 = (unsigned char)32;
unsigned char var_13 = (unsigned char)34;
int zero = 0;
unsigned char var_14 = (unsigned char)211;
unsigned char var_15 = (unsigned char)247;
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
