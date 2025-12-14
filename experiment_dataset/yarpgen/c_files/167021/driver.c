#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)11597;
unsigned long long int var_13 = 705860869055179520ULL;
unsigned short var_14 = (unsigned short)52813;
int zero = 0;
unsigned int var_15 = 1263404276U;
unsigned int var_16 = 2965176495U;
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
