#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1794818825U;
short var_6 = (short)16729;
long long int var_7 = -1384390988500667486LL;
unsigned long long int var_10 = 2401782116650334386ULL;
int zero = 0;
int var_11 = 2059819391;
unsigned long long int var_12 = 4613836470897874202ULL;
unsigned int var_13 = 2671775427U;
long long int var_14 = 4270716208519424635LL;
short var_15 = (short)1052;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
