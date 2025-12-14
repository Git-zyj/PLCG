#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)218;
int var_4 = 1558032813;
int var_8 = 1755759932;
unsigned char var_11 = (unsigned char)65;
int zero = 0;
unsigned char var_14 = (unsigned char)60;
unsigned char var_15 = (unsigned char)236;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
