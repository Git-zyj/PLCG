#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)123;
int var_7 = -1369009311;
long long int var_11 = 4438705429139887625LL;
int zero = 0;
long long int var_16 = 6598294559340413048LL;
unsigned short var_17 = (unsigned short)50141;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
