#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)123;
unsigned int var_11 = 68574462U;
unsigned int var_12 = 442801350U;
int zero = 0;
unsigned char var_14 = (unsigned char)138;
signed char var_15 = (signed char)-22;
int var_16 = -200124555;
int var_17 = 331791580;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
