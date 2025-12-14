#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 20499459U;
unsigned short var_4 = (unsigned short)64706;
unsigned int var_8 = 1424687810U;
signed char var_11 = (signed char)8;
int zero = 0;
long long int var_19 = 7248577652871512867LL;
unsigned char var_20 = (unsigned char)252;
void init() {
}

void checksum() {
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
