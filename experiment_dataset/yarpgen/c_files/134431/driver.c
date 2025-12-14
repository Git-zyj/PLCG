#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52378;
short var_4 = (short)10593;
signed char var_5 = (signed char)34;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 6230921948650466894ULL;
unsigned short var_12 = (unsigned short)39940;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
