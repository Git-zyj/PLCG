#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2800410210U;
unsigned short var_7 = (unsigned short)29925;
unsigned short var_8 = (unsigned short)49973;
unsigned int var_11 = 3760709880U;
int zero = 0;
unsigned int var_15 = 3775919020U;
unsigned long long int var_16 = 10830652604518399770ULL;
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
