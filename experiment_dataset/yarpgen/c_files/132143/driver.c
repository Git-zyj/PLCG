#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)61;
unsigned char var_4 = (unsigned char)182;
unsigned char var_5 = (unsigned char)86;
unsigned short var_7 = (unsigned short)50883;
int var_8 = -773557371;
int zero = 0;
unsigned char var_10 = (unsigned char)58;
unsigned char var_11 = (unsigned char)132;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
