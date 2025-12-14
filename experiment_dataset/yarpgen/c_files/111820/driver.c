#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5358295684568282800ULL;
long long int var_7 = 5213126813824998223LL;
int zero = 0;
unsigned long long int var_18 = 9047854997124391133ULL;
int var_19 = 2080289993;
long long int var_20 = 2274671891011827735LL;
void init() {
}

void checksum() {
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
