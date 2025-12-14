#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)4;
unsigned int var_8 = 2142995162U;
unsigned long long int var_14 = 625596568956461646ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)190;
signed char var_16 = (signed char)-92;
int var_17 = -330583288;
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
