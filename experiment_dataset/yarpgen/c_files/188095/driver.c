#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6035013601709903997LL;
unsigned int var_11 = 2703114222U;
unsigned long long int var_13 = 10220630111082150505ULL;
int zero = 0;
unsigned long long int var_20 = 16049021235805601598ULL;
unsigned char var_21 = (unsigned char)29;
unsigned int var_22 = 291608137U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
