#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1420929074670381404ULL;
unsigned short var_3 = (unsigned short)31312;
short var_5 = (short)966;
short var_6 = (short)78;
long long int var_7 = -2546989192002496015LL;
unsigned char var_8 = (unsigned char)160;
int zero = 0;
long long int var_11 = 7405438220992512895LL;
long long int var_12 = -8293148816864269324LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
