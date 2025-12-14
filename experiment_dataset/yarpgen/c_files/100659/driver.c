#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)32;
unsigned long long int var_14 = 17578311764964267067ULL;
long long int var_15 = -8064043203398604381LL;
int zero = 0;
unsigned long long int var_19 = 10472482857980120560ULL;
unsigned int var_20 = 3866006225U;
void init() {
}

void checksum() {
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
