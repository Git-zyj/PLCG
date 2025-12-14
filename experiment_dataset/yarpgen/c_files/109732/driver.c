#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1651003631U;
int var_8 = 1710879083;
int var_11 = -886598993;
unsigned long long int var_12 = 6507347476773008077ULL;
unsigned int var_14 = 3932905967U;
unsigned short var_18 = (unsigned short)48065;
int zero = 0;
unsigned int var_20 = 1613906556U;
unsigned int var_21 = 3807354008U;
unsigned char var_22 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
