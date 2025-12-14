#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 447479647U;
int var_6 = -1270210895;
unsigned int var_7 = 964078638U;
unsigned long long int var_8 = 17154091719351998881ULL;
unsigned long long int var_9 = 5597227535262281165ULL;
int zero = 0;
unsigned long long int var_10 = 4214894169019490572ULL;
long long int var_11 = -2742745123853373723LL;
unsigned int var_12 = 1017877376U;
unsigned long long int var_13 = 8997562140475979584ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
