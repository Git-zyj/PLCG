#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-59;
unsigned int var_1 = 1672567496U;
unsigned int var_5 = 4270253531U;
int var_7 = 1017770096;
unsigned short var_8 = (unsigned short)11732;
unsigned char var_12 = (unsigned char)130;
int zero = 0;
int var_13 = 371318597;
unsigned char var_14 = (unsigned char)231;
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
