#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1398903844U;
signed char var_3 = (signed char)50;
int var_7 = -263911942;
unsigned char var_9 = (unsigned char)74;
long long int var_10 = 7404137360345481057LL;
unsigned long long int var_11 = 1559799277053626795ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)176;
unsigned char var_15 = (unsigned char)238;
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
