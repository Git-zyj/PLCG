#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1669113902U;
int var_8 = -1891745182;
unsigned int var_9 = 146747838U;
short var_13 = (short)-8958;
int zero = 0;
long long int var_14 = 7872421532959312709LL;
unsigned long long int var_15 = 14251456366827929063ULL;
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
