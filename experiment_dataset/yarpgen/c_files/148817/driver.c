#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4354966871589564868LL;
long long int var_3 = 6886422157423064771LL;
unsigned int var_10 = 318215347U;
short var_11 = (short)2404;
int zero = 0;
unsigned int var_14 = 3354960519U;
unsigned int var_15 = 2566425300U;
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
