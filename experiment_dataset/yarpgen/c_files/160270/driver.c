#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10061801428112684965ULL;
unsigned char var_3 = (unsigned char)8;
unsigned char var_7 = (unsigned char)178;
int zero = 0;
short var_13 = (short)8472;
unsigned int var_14 = 3778616709U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
