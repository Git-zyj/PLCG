#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)182;
short var_6 = (short)-22200;
int var_8 = 69602534;
unsigned int var_12 = 3352054710U;
int zero = 0;
int var_16 = 1669230613;
unsigned long long int var_17 = 6150776544640878091ULL;
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
