#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12008;
signed char var_5 = (signed char)126;
short var_6 = (short)-16390;
short var_10 = (short)1021;
int zero = 0;
unsigned long long int var_13 = 1991461110445030165ULL;
unsigned int var_14 = 58552596U;
long long int var_15 = 3728320814410696019LL;
void init() {
}

void checksum() {
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
