#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1095866919U;
unsigned int var_4 = 2712989387U;
unsigned int var_11 = 3416691669U;
unsigned int var_13 = 2228007268U;
int zero = 0;
unsigned int var_14 = 1781919448U;
unsigned int var_15 = 2513501283U;
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
