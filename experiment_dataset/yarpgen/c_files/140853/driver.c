#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1674421861;
signed char var_8 = (signed char)-99;
int zero = 0;
unsigned char var_15 = (unsigned char)142;
unsigned long long int var_16 = 13891855984772384567ULL;
unsigned long long int var_17 = 8199354617551641473ULL;
long long int var_18 = 6350556767175225754LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
