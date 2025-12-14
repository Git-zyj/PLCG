#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3311043118U;
unsigned int var_10 = 3122789631U;
int zero = 0;
unsigned long long int var_20 = 11302298686965327941ULL;
unsigned long long int var_21 = 11940771761108615031ULL;
unsigned long long int var_22 = 14289593829563908729ULL;
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
