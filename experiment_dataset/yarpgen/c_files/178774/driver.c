#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13387367341485410712ULL;
unsigned char var_2 = (unsigned char)240;
unsigned char var_3 = (unsigned char)92;
signed char var_6 = (signed char)115;
int var_7 = 1655725367;
int zero = 0;
signed char var_14 = (signed char)-20;
unsigned short var_15 = (unsigned short)25052;
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
