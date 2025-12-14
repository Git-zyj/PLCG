#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)41;
int var_2 = 544665717;
int var_6 = -174653830;
unsigned long long int var_7 = 15751260220298117877ULL;
int var_8 = 588738069;
unsigned int var_11 = 1757186303U;
unsigned long long int var_12 = 13848812920378634222ULL;
int zero = 0;
unsigned long long int var_15 = 10458473293787891136ULL;
short var_16 = (short)26167;
unsigned char var_17 = (unsigned char)227;
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
