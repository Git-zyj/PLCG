#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2551443688U;
unsigned int var_11 = 3619777508U;
int var_15 = 44551713;
int zero = 0;
unsigned short var_17 = (unsigned short)30228;
long long int var_18 = -6429480867372921098LL;
unsigned int var_19 = 1419181323U;
unsigned long long int var_20 = 12460293097514860279ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
