#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 9001183561273173489ULL;
short var_13 = (short)-4401;
signed char var_18 = (signed char)54;
int zero = 0;
unsigned int var_20 = 3225967163U;
int var_21 = 1674229589;
unsigned short var_22 = (unsigned short)5861;
short var_23 = (short)12963;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
