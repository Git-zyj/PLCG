#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2780248520U;
unsigned char var_3 = (unsigned char)130;
unsigned int var_6 = 1253379793U;
unsigned char var_11 = (unsigned char)5;
unsigned short var_12 = (unsigned short)32630;
int zero = 0;
unsigned char var_17 = (unsigned char)3;
unsigned short var_18 = (unsigned short)60592;
void init() {
}

void checksum() {
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
