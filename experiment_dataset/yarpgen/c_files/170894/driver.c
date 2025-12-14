#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1363639518;
unsigned char var_5 = (unsigned char)244;
signed char var_6 = (signed char)-67;
signed char var_12 = (signed char)-93;
signed char var_14 = (signed char)-5;
int zero = 0;
unsigned char var_15 = (unsigned char)87;
signed char var_16 = (signed char)-14;
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
