#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7476612769018797685ULL;
unsigned short var_7 = (unsigned short)20078;
int var_8 = 1432278081;
unsigned short var_11 = (unsigned short)574;
int zero = 0;
unsigned short var_12 = (unsigned short)4147;
signed char var_13 = (signed char)45;
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
