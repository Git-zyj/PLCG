#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)29;
unsigned int var_4 = 1164020569U;
int var_5 = 1093272829;
long long int var_6 = 2954973609825703934LL;
unsigned short var_9 = (unsigned short)7848;
unsigned short var_11 = (unsigned short)42902;
int zero = 0;
signed char var_12 = (signed char)79;
unsigned int var_13 = 972403387U;
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
