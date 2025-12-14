#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3715;
unsigned int var_3 = 3209912031U;
signed char var_11 = (signed char)10;
unsigned short var_13 = (unsigned short)24487;
int var_15 = -1323754651;
int zero = 0;
unsigned short var_16 = (unsigned short)21616;
unsigned short var_17 = (unsigned short)62447;
long long int var_18 = 5578864215648319146LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
