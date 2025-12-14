#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-6;
unsigned long long int var_3 = 1230039050540405985ULL;
unsigned int var_4 = 3768774565U;
unsigned int var_5 = 1639863418U;
unsigned short var_8 = (unsigned short)42851;
unsigned long long int var_9 = 16231294354526778556ULL;
int var_10 = 2054793871;
unsigned int var_11 = 3078350478U;
int zero = 0;
int var_12 = 1739404038;
unsigned short var_13 = (unsigned short)54290;
unsigned char var_14 = (unsigned char)14;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
