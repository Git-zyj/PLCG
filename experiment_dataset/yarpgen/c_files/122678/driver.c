#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 392891401U;
unsigned int var_9 = 73733800U;
unsigned char var_10 = (unsigned char)185;
int zero = 0;
unsigned long long int var_16 = 8563208631999912152ULL;
unsigned int var_17 = 3899338502U;
unsigned long long int var_18 = 13832854505452644954ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
