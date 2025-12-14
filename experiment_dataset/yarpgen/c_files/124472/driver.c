#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3756310855U;
unsigned char var_2 = (unsigned char)248;
unsigned int var_11 = 1835998154U;
int zero = 0;
unsigned char var_17 = (unsigned char)225;
unsigned int var_18 = 2675857629U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
