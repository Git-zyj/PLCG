#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7147368493641551062LL;
unsigned long long int var_9 = 13251105810898345361ULL;
unsigned long long int var_10 = 8205131751997382677ULL;
int zero = 0;
int var_13 = 295063369;
unsigned long long int var_14 = 14879445123695981784ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
