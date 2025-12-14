#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = -8921133419290463207LL;
unsigned long long int var_13 = 1734676878675411140ULL;
int zero = 0;
unsigned long long int var_14 = 2235341872455007649ULL;
unsigned int var_15 = 1294825130U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
