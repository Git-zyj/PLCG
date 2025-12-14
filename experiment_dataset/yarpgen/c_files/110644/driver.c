#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)84;
signed char var_7 = (signed char)-40;
int var_10 = -1777781605;
int zero = 0;
unsigned char var_15 = (unsigned char)209;
signed char var_16 = (signed char)58;
unsigned short var_17 = (unsigned short)23175;
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
