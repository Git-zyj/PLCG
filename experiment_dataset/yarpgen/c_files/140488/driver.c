#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)45;
unsigned long long int var_7 = 6947776938546405746ULL;
short var_12 = (short)-6182;
int zero = 0;
unsigned int var_15 = 850453705U;
unsigned long long int var_16 = 2352540056038520246ULL;
unsigned char var_17 = (unsigned char)241;
unsigned char var_18 = (unsigned char)70;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
