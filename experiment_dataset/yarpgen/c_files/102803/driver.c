#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1900529823;
unsigned int var_5 = 3380999094U;
unsigned int var_7 = 1523309453U;
int var_11 = -1008751847;
int zero = 0;
unsigned int var_14 = 2354784585U;
unsigned long long int var_15 = 4108938351415918676ULL;
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
