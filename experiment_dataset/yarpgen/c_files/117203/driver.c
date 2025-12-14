#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2024134901U;
unsigned short var_6 = (unsigned short)41836;
signed char var_10 = (signed char)-85;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 2460816086U;
unsigned long long int var_17 = 7268575370977250467ULL;
void init() {
}

void checksum() {
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
