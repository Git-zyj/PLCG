#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_14 = -1070959610;
unsigned char var_16 = (unsigned char)171;
int zero = 0;
unsigned long long int var_17 = 15747328628083222512ULL;
signed char var_18 = (signed char)-40;
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
