#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 25879639;
unsigned char var_3 = (unsigned char)227;
signed char var_4 = (signed char)-10;
int var_14 = 1460373899;
int zero = 0;
int var_16 = 784154116;
signed char var_17 = (signed char)-35;
signed char var_18 = (signed char)-41;
unsigned char var_19 = (unsigned char)81;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
