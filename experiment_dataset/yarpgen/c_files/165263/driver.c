#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1493209534;
unsigned long long int var_11 = 11017201918362883022ULL;
int zero = 0;
unsigned long long int var_14 = 17445852242799096510ULL;
int var_15 = -1688887506;
unsigned int var_16 = 925842597U;
unsigned int var_17 = 3324172329U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
