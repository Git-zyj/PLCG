#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 234358617U;
unsigned long long int var_3 = 6265356529168789895ULL;
unsigned long long int var_5 = 9805937868150104657ULL;
int zero = 0;
long long int var_12 = -8091564595217661295LL;
unsigned char var_13 = (unsigned char)64;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
