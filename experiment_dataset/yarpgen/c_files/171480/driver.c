#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4291108210U;
unsigned short var_7 = (unsigned short)48763;
short var_9 = (short)21402;
int var_12 = 2013683614;
int zero = 0;
signed char var_13 = (signed char)-113;
short var_14 = (short)-29829;
unsigned char var_15 = (unsigned char)236;
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
