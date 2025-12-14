#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)22;
signed char var_4 = (signed char)-48;
signed char var_10 = (signed char)124;
int zero = 0;
unsigned long long int var_11 = 12900077254655534654ULL;
unsigned char var_12 = (unsigned char)203;
unsigned int var_13 = 553182274U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
