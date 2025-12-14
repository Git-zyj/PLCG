#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2190812769U;
short var_5 = (short)-24710;
unsigned int var_7 = 4125748432U;
signed char var_8 = (signed char)20;
short var_12 = (short)-7233;
int zero = 0;
int var_15 = -1923537005;
long long int var_16 = 8974646116032920562LL;
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
