#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1693133627U;
unsigned short var_2 = (unsigned short)18165;
unsigned char var_10 = (unsigned char)246;
int zero = 0;
signed char var_11 = (signed char)61;
long long int var_12 = -8866661562784680979LL;
void init() {
}

void checksum() {
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
