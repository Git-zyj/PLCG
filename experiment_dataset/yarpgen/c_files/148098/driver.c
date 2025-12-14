#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)1;
unsigned char var_10 = (unsigned char)36;
int var_11 = 1968991787;
int var_12 = -1963520168;
unsigned char var_15 = (unsigned char)63;
int zero = 0;
unsigned int var_16 = 1799206212U;
unsigned long long int var_17 = 13545767579042966110ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
