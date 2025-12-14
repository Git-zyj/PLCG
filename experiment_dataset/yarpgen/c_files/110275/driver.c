#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1263010512;
unsigned int var_2 = 3998065016U;
unsigned long long int var_9 = 7638065364630139746ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)44710;
unsigned int var_15 = 2564774359U;
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
