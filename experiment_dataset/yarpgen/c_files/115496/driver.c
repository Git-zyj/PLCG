#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 16151670141162721395ULL;
unsigned int var_12 = 2053962945U;
unsigned int var_17 = 1400800694U;
int zero = 0;
int var_18 = 1954073349;
unsigned char var_19 = (unsigned char)234;
unsigned char var_20 = (unsigned char)192;
signed char var_21 = (signed char)76;
unsigned char var_22 = (unsigned char)117;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
