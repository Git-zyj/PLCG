#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)29;
unsigned int var_2 = 2645745693U;
unsigned int var_3 = 1267050173U;
short var_11 = (short)6079;
long long int var_16 = -2435653996001926547LL;
int zero = 0;
unsigned int var_20 = 3936528700U;
int var_21 = 827289463;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
