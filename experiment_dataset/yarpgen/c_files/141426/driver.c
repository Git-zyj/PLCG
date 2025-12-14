#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
_Bool var_3 = (_Bool)1;
short var_9 = (short)11227;
signed char var_10 = (signed char)12;
int zero = 0;
int var_14 = -1754482589;
unsigned long long int var_15 = 16906051352761233764ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
