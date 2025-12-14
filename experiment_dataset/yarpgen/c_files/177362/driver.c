#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1993097114U;
unsigned long long int var_2 = 6077858606225640680ULL;
int var_7 = 1041806293;
int zero = 0;
unsigned char var_19 = (unsigned char)242;
unsigned long long int var_20 = 14241471274102331750ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
