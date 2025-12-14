#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)115;
unsigned short var_4 = (unsigned short)21214;
signed char var_7 = (signed char)-22;
signed char var_8 = (signed char)113;
int zero = 0;
short var_13 = (short)-1382;
unsigned short var_14 = (unsigned short)50581;
unsigned short var_15 = (unsigned short)56609;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
