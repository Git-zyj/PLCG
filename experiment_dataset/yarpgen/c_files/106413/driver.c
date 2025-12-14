#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)88;
signed char var_4 = (signed char)-16;
unsigned char var_5 = (unsigned char)172;
int var_11 = 2133793969;
int zero = 0;
signed char var_12 = (signed char)45;
int var_13 = 1185310722;
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
