#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1898643228321185488LL;
signed char var_3 = (signed char)-52;
signed char var_7 = (signed char)10;
int zero = 0;
unsigned short var_16 = (unsigned short)29342;
unsigned int var_17 = 244205752U;
void init() {
}

void checksum() {
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
