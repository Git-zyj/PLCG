#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2708726885U;
unsigned char var_3 = (unsigned char)189;
unsigned char var_6 = (unsigned char)147;
int zero = 0;
unsigned long long int var_12 = 10125891932797261382ULL;
unsigned char var_13 = (unsigned char)122;
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
