#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-26259;
unsigned long long int var_3 = 1557196432785483376ULL;
short var_9 = (short)-26463;
int zero = 0;
unsigned long long int var_10 = 17520016231152843147ULL;
unsigned short var_11 = (unsigned short)363;
unsigned long long int var_12 = 11845526791177057859ULL;
unsigned long long int var_13 = 5963598663715830871ULL;
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
