#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)84;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)9;
int var_12 = 280688463;
int zero = 0;
unsigned long long int var_15 = 14305176978082190898ULL;
long long int var_16 = 2798185457105500480LL;
unsigned long long int var_17 = 15953905743587547545ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
