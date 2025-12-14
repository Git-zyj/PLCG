#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3298737197U;
unsigned int var_6 = 3892500078U;
int zero = 0;
unsigned int var_11 = 4045338092U;
unsigned int var_12 = 1817915330U;
unsigned int var_13 = 4010081550U;
unsigned int var_14 = 3821986747U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
