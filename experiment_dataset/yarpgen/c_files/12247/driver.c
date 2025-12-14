#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1842497322U;
short var_6 = (short)-13448;
short var_17 = (short)-5335;
int zero = 0;
short var_20 = (short)13870;
unsigned long long int var_21 = 8973869854447992027ULL;
long long int var_22 = -4343373500298717176LL;
short var_23 = (short)-32261;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
