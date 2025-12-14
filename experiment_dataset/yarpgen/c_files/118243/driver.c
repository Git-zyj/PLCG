#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1421724210U;
unsigned int var_3 = 3482648599U;
unsigned int var_4 = 3046018600U;
unsigned int var_6 = 2419090795U;
unsigned int var_10 = 3612125242U;
int zero = 0;
unsigned int var_18 = 4285833312U;
unsigned int var_19 = 977667044U;
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
