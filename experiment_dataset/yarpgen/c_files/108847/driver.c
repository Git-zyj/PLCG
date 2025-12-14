#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)71;
unsigned char var_8 = (unsigned char)140;
signed char var_11 = (signed char)74;
signed char var_12 = (signed char)23;
unsigned char var_16 = (unsigned char)231;
int zero = 0;
unsigned char var_17 = (unsigned char)55;
signed char var_18 = (signed char)-96;
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
