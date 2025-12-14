#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17244532960662773725ULL;
unsigned long long int var_5 = 5142093671849735142ULL;
unsigned char var_6 = (unsigned char)198;
short var_7 = (short)-24290;
int var_9 = -1816993422;
int zero = 0;
signed char var_10 = (signed char)79;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
