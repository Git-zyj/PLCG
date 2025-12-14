#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3975598601U;
short var_7 = (short)-9081;
unsigned int var_9 = 414289003U;
signed char var_10 = (signed char)52;
signed char var_12 = (signed char)40;
short var_13 = (short)-7378;
int zero = 0;
unsigned char var_15 = (unsigned char)120;
unsigned long long int var_16 = 7268266007877549123ULL;
unsigned int var_17 = 3772300199U;
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
