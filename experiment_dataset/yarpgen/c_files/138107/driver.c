#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-56;
unsigned int var_1 = 2011867799U;
unsigned int var_7 = 1319799144U;
unsigned char var_10 = (unsigned char)53;
int zero = 0;
unsigned int var_17 = 2418999093U;
signed char var_18 = (signed char)-35;
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
