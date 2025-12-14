#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)35;
signed char var_4 = (signed char)63;
unsigned char var_5 = (unsigned char)132;
unsigned char var_6 = (unsigned char)75;
unsigned char var_8 = (unsigned char)226;
unsigned int var_9 = 3903862568U;
int zero = 0;
signed char var_10 = (signed char)73;
unsigned long long int var_11 = 12061940539324804544ULL;
unsigned int var_12 = 2738767386U;
short var_13 = (short)851;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
