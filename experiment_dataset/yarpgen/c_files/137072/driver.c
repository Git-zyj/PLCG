#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)61;
unsigned char var_3 = (unsigned char)67;
unsigned char var_4 = (unsigned char)234;
unsigned short var_6 = (unsigned short)34127;
int zero = 0;
signed char var_11 = (signed char)57;
unsigned short var_12 = (unsigned short)12685;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
