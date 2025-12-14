#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2720353304U;
unsigned long long int var_3 = 11585268289363312200ULL;
unsigned int var_4 = 1517102769U;
unsigned long long int var_9 = 12427816567628970606ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)9;
int var_12 = 1540351750;
int var_13 = 1948163434;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
