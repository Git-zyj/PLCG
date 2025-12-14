#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)199;
int var_8 = -750718232;
unsigned int var_12 = 191278711U;
long long int var_14 = -434623268985930943LL;
unsigned long long int var_18 = 2498314439982473950ULL;
int zero = 0;
signed char var_20 = (signed char)-123;
int var_21 = -1854991029;
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
