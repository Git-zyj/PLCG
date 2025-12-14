#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 37261300;
signed char var_3 = (signed char)-86;
int var_6 = 973863790;
signed char var_9 = (signed char)-94;
int zero = 0;
unsigned char var_10 = (unsigned char)33;
unsigned char var_11 = (unsigned char)203;
signed char var_12 = (signed char)-18;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
