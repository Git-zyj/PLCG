#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1924849708U;
unsigned short var_4 = (unsigned short)45362;
unsigned short var_6 = (unsigned short)33165;
int zero = 0;
short var_10 = (short)20760;
unsigned short var_11 = (unsigned short)13405;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
