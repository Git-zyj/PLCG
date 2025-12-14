#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17384746288593113285ULL;
signed char var_6 = (signed char)21;
signed char var_9 = (signed char)-94;
int zero = 0;
signed char var_11 = (signed char)-4;
short var_12 = (short)3107;
unsigned short var_13 = (unsigned short)36702;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
