#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)13;
unsigned int var_2 = 449242559U;
unsigned int var_5 = 253063603U;
signed char var_7 = (signed char)67;
signed char var_8 = (signed char)-106;
int zero = 0;
int var_14 = 990905544;
unsigned int var_15 = 527665550U;
unsigned short var_16 = (unsigned short)50299;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
