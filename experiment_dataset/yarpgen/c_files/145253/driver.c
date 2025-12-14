#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10403247268670282228ULL;
unsigned short var_2 = (unsigned short)3456;
int var_11 = 1004029484;
int zero = 0;
unsigned short var_13 = (unsigned short)43440;
signed char var_14 = (signed char)-97;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
