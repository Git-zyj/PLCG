#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1690244132U;
unsigned int var_8 = 2112236533U;
unsigned int var_12 = 1608532578U;
unsigned int var_14 = 2761993401U;
unsigned int var_17 = 3865832091U;
int zero = 0;
unsigned int var_19 = 1270399658U;
unsigned int var_20 = 273023317U;
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
