#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)49;
unsigned char var_10 = (unsigned char)148;
unsigned long long int var_12 = 16884284088063434941ULL;
signed char var_13 = (signed char)-57;
int zero = 0;
signed char var_15 = (signed char)-7;
unsigned int var_16 = 55735816U;
short var_17 = (short)3990;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
