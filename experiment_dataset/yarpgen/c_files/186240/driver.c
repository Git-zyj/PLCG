#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)143;
unsigned long long int var_1 = 185780057132550685ULL;
unsigned int var_2 = 3363624187U;
unsigned char var_10 = (unsigned char)184;
int var_11 = 49988317;
int zero = 0;
int var_14 = -390495158;
signed char var_15 = (signed char)-16;
long long int var_16 = -4323150709401472300LL;
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
