#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1660256832;
unsigned char var_8 = (unsigned char)69;
int var_16 = -1565689745;
int zero = 0;
unsigned short var_18 = (unsigned short)25077;
unsigned short var_19 = (unsigned short)34796;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
