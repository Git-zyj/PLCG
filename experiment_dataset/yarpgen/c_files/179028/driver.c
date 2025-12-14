#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3742136994U;
unsigned int var_5 = 902599760U;
unsigned int var_12 = 2975119120U;
int zero = 0;
unsigned int var_17 = 761093882U;
short var_18 = (short)-29197;
unsigned int var_19 = 4225207442U;
unsigned int var_20 = 133281826U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
