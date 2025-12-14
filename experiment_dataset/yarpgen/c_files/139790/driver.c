#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 6049880787187108423LL;
long long int var_9 = 5809257961274245365LL;
long long int var_10 = 8725596912786026540LL;
int zero = 0;
unsigned long long int var_11 = 6329665656204098801ULL;
long long int var_12 = 7039673618862974676LL;
int var_13 = -1994646447;
void init() {
}

void checksum() {
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
