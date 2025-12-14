#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2075501552;
long long int var_3 = 1992230747236330601LL;
signed char var_5 = (signed char)-49;
int zero = 0;
short var_13 = (short)11734;
long long int var_14 = 8612825434109933418LL;
unsigned long long int var_15 = 5645439251026450801ULL;
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
