#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15460;
unsigned int var_5 = 1810979079U;
long long int var_6 = -3664433285019049961LL;
unsigned short var_10 = (unsigned short)61812;
int zero = 0;
signed char var_12 = (signed char)76;
unsigned char var_13 = (unsigned char)29;
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
