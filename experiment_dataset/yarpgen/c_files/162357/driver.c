#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)106;
unsigned int var_5 = 3608547150U;
unsigned int var_6 = 2592614900U;
unsigned int var_7 = 2542608832U;
unsigned long long int var_15 = 17261175326699565189ULL;
int zero = 0;
unsigned int var_17 = 1377903995U;
unsigned int var_18 = 4236431460U;
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
