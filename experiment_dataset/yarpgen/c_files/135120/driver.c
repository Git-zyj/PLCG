#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18039312890470375813ULL;
int var_9 = -953924524;
unsigned int var_10 = 3406026794U;
int zero = 0;
unsigned char var_11 = (unsigned char)155;
unsigned int var_12 = 1607325538U;
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
