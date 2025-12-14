#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3254666408U;
signed char var_5 = (signed char)44;
unsigned int var_9 = 1415113533U;
unsigned int var_11 = 1740226765U;
unsigned char var_12 = (unsigned char)140;
int zero = 0;
int var_15 = 1760498160;
unsigned char var_16 = (unsigned char)144;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
