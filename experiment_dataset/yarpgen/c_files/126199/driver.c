#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3084;
short var_3 = (short)14212;
unsigned char var_8 = (unsigned char)188;
long long int var_10 = -1357182418474279164LL;
unsigned long long int var_11 = 17514568512186377954ULL;
int zero = 0;
unsigned int var_12 = 3354936982U;
int var_13 = -72513327;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
