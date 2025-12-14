#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 9965978432454052899ULL;
unsigned char var_10 = (unsigned char)148;
signed char var_11 = (signed char)3;
unsigned long long int var_14 = 6778247995311885072ULL;
int zero = 0;
unsigned long long int var_15 = 14483404137362441057ULL;
short var_16 = (short)8093;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
