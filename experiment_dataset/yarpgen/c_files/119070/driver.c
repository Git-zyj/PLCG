#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4757808U;
unsigned int var_7 = 3620578122U;
unsigned short var_14 = (unsigned short)15037;
int zero = 0;
unsigned short var_17 = (unsigned short)59008;
unsigned int var_18 = 1068836583U;
void init() {
}

void checksum() {
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
