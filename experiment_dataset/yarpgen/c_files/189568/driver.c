#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-52;
unsigned char var_6 = (unsigned char)172;
unsigned int var_10 = 1171571376U;
int zero = 0;
short var_16 = (short)-32557;
unsigned int var_17 = 4285703140U;
short var_18 = (short)-182;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
