#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2803098280U;
unsigned int var_6 = 3313176341U;
unsigned char var_8 = (unsigned char)58;
int zero = 0;
unsigned char var_13 = (unsigned char)242;
unsigned short var_14 = (unsigned short)15329;
void init() {
}

void checksum() {
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
