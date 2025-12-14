#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59314;
unsigned char var_3 = (unsigned char)139;
unsigned int var_4 = 1269347815U;
long long int var_12 = -3677985786532848161LL;
int var_15 = 1277503277;
int zero = 0;
short var_16 = (short)20300;
int var_17 = 1374883861;
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
