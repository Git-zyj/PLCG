#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 16317695931346852189ULL;
long long int var_6 = -6106648899382462413LL;
int zero = 0;
unsigned char var_11 = (unsigned char)205;
unsigned char var_12 = (unsigned char)140;
signed char var_13 = (signed char)-8;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
