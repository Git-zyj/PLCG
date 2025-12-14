#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36094;
unsigned char var_2 = (unsigned char)84;
unsigned char var_7 = (unsigned char)221;
int zero = 0;
unsigned char var_14 = (unsigned char)95;
int var_15 = 870492706;
signed char var_16 = (signed char)-59;
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
