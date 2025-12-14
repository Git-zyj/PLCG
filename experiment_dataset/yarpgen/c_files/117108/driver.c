#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1990400823U;
unsigned char var_6 = (unsigned char)73;
unsigned short var_12 = (unsigned short)50778;
int zero = 0;
short var_16 = (short)-171;
short var_17 = (short)26402;
signed char var_18 = (signed char)-56;
int var_19 = -289925603;
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
