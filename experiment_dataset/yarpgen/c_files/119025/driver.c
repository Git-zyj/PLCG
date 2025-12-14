#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)79;
long long int var_3 = 2323356225365727236LL;
int var_5 = 1643709349;
int zero = 0;
int var_10 = -1573184155;
unsigned char var_11 = (unsigned char)211;
unsigned int var_12 = 186300406U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
