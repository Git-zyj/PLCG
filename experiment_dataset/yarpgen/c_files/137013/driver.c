#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 328740988;
unsigned int var_3 = 1941790427U;
unsigned long long int var_18 = 17662366704461343604ULL;
unsigned long long int var_19 = 7138132566168215523ULL;
int zero = 0;
unsigned long long int var_20 = 4708643561241193642ULL;
unsigned long long int var_21 = 14513171395360145316ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
