#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3163644738908239345LL;
unsigned long long int var_6 = 170205648366180559ULL;
short var_7 = (short)-17973;
short var_10 = (short)-454;
long long int var_11 = 1772102363165148803LL;
int zero = 0;
short var_12 = (short)-976;
unsigned short var_13 = (unsigned short)53751;
long long int var_14 = 8737740350633460758LL;
int var_15 = 372572276;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
