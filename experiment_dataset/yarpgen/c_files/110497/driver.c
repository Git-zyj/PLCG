#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4022288395U;
unsigned long long int var_3 = 13917114925995001270ULL;
unsigned int var_6 = 2957442350U;
unsigned long long int var_9 = 3248874278490627610ULL;
unsigned char var_13 = (unsigned char)88;
int zero = 0;
long long int var_15 = 7978881850398665006LL;
int var_16 = 685103769;
void init() {
}

void checksum() {
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
