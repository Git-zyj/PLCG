#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4075908601U;
short var_6 = (short)-23127;
unsigned char var_10 = (unsigned char)136;
short var_12 = (short)-27640;
unsigned char var_13 = (unsigned char)115;
int zero = 0;
unsigned int var_19 = 2412035225U;
unsigned char var_20 = (unsigned char)112;
unsigned char var_21 = (unsigned char)238;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
