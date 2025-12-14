#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)192;
unsigned int var_6 = 1970945911U;
short var_8 = (short)30417;
int var_12 = 769207016;
long long int var_13 = -1333326302788628374LL;
int zero = 0;
unsigned long long int var_14 = 11394575622788699727ULL;
unsigned int var_15 = 2264871272U;
unsigned char var_16 = (unsigned char)142;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
