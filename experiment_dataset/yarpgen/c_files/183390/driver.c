#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17820;
signed char var_2 = (signed char)42;
int var_4 = 1943738668;
unsigned short var_5 = (unsigned short)46267;
long long int var_10 = 3499117814738408982LL;
int zero = 0;
unsigned short var_12 = (unsigned short)15742;
unsigned char var_13 = (unsigned char)107;
long long int var_14 = -4075264236171490366LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
