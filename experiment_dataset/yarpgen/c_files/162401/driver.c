#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)73;
unsigned int var_3 = 2888100858U;
unsigned char var_10 = (unsigned char)59;
int zero = 0;
unsigned int var_13 = 2093926463U;
unsigned char var_14 = (unsigned char)253;
unsigned char var_15 = (unsigned char)46;
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
