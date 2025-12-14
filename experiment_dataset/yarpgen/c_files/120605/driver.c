#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)28;
signed char var_7 = (signed char)-22;
long long int var_13 = -3836498021897748000LL;
int zero = 0;
unsigned char var_15 = (unsigned char)235;
unsigned long long int var_16 = 10465081299227720368ULL;
short var_17 = (short)-23901;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
