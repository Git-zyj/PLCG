#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1958988034U;
short var_1 = (short)-23380;
unsigned int var_9 = 335712019U;
signed char var_19 = (signed char)55;
int zero = 0;
short var_20 = (short)11740;
unsigned long long int var_21 = 3470856774505236432ULL;
unsigned long long int var_22 = 8626695999926729401ULL;
unsigned long long int var_23 = 2975442397088663859ULL;
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
