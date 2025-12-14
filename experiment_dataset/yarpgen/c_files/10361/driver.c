#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)39799;
short var_3 = (short)-25543;
long long int var_4 = -94394496700428298LL;
short var_5 = (short)-30039;
unsigned short var_6 = (unsigned short)24697;
int var_9 = -581348834;
int zero = 0;
signed char var_11 = (signed char)17;
unsigned int var_12 = 3391784783U;
unsigned long long int var_13 = 12931517837936491520ULL;
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
