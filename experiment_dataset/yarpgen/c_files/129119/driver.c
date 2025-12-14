#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1897516579U;
int var_3 = -1031115858;
unsigned char var_7 = (unsigned char)227;
unsigned int var_9 = 2066383915U;
unsigned short var_12 = (unsigned short)41750;
unsigned long long int var_18 = 7252199083465424779ULL;
int zero = 0;
signed char var_20 = (signed char)-122;
unsigned long long int var_21 = 12543583290237542401ULL;
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
