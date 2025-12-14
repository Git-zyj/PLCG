#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8541373425531919951ULL;
unsigned long long int var_7 = 18338877504781364082ULL;
int var_9 = -6118943;
int zero = 0;
long long int var_17 = 7547344090870165649LL;
int var_18 = 1797967669;
signed char var_19 = (signed char)109;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
