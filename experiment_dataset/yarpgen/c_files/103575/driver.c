#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1738593621U;
unsigned int var_4 = 934192557U;
unsigned int var_7 = 3371986684U;
unsigned int var_10 = 1339024563U;
unsigned int var_12 = 1009809534U;
int zero = 0;
unsigned int var_18 = 2673093856U;
unsigned int var_19 = 1026187996U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
