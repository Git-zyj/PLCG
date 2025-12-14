#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2645840094U;
unsigned char var_8 = (unsigned char)27;
unsigned short var_9 = (unsigned short)24521;
unsigned int var_10 = 1771927499U;
long long int var_11 = -7061885555416728147LL;
unsigned char var_15 = (unsigned char)37;
int zero = 0;
unsigned int var_16 = 116265949U;
unsigned short var_17 = (unsigned short)7330;
void init() {
}

void checksum() {
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
