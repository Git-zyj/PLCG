#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1873079163U;
int var_3 = -1925083765;
unsigned char var_4 = (unsigned char)230;
unsigned int var_9 = 1617351995U;
int zero = 0;
unsigned char var_10 = (unsigned char)32;
int var_11 = 1213842630;
unsigned int var_12 = 98517666U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
