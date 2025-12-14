#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-22398;
unsigned long long int var_7 = 17968969132604915803ULL;
short var_9 = (short)30948;
int zero = 0;
unsigned char var_17 = (unsigned char)179;
unsigned int var_18 = 2526028850U;
unsigned char var_19 = (unsigned char)66;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
