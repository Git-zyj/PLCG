#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-32285;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-28942;
short var_11 = (short)27795;
signed char var_12 = (signed char)-83;
unsigned char var_17 = (unsigned char)218;
int zero = 0;
short var_20 = (short)5331;
unsigned long long int var_21 = 478205080820676520ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
