#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4007361143U;
unsigned long long int var_14 = 18428495692397488532ULL;
int zero = 0;
unsigned long long int var_20 = 15671208167733958821ULL;
unsigned long long int var_21 = 994610646774554969ULL;
unsigned long long int var_22 = 13030686361656142003ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
