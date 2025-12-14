#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1794324173;
int var_8 = -1494110943;
unsigned int var_11 = 2048494615U;
int zero = 0;
unsigned int var_13 = 1063758212U;
int var_14 = -1288613967;
int var_15 = -771587953;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
