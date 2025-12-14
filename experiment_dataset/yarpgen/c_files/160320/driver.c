#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 836468344987337091ULL;
long long int var_4 = -7656272946132531100LL;
short var_10 = (short)16714;
int zero = 0;
short var_16 = (short)11794;
long long int var_17 = 8933493918435028708LL;
unsigned char var_18 = (unsigned char)171;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
