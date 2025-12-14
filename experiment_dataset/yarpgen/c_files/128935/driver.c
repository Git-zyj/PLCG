#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14623442397213523221ULL;
unsigned short var_4 = (unsigned short)2518;
unsigned long long int var_5 = 217760460031466431ULL;
unsigned long long int var_8 = 5523073230821029565ULL;
unsigned long long int var_10 = 15418075736035597419ULL;
unsigned int var_12 = 3876136604U;
int zero = 0;
unsigned int var_14 = 826204530U;
unsigned int var_15 = 956665275U;
unsigned int var_16 = 2899533488U;
unsigned short var_17 = (unsigned short)46343;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
