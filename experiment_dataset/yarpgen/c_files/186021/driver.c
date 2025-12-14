#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_15 = 110998279;
long long int var_16 = -665209682450597278LL;
int zero = 0;
unsigned long long int var_19 = 2011116028624546332ULL;
unsigned long long int var_20 = 16884476734366769457ULL;
unsigned long long int var_21 = 17930884483692975249ULL;
unsigned int var_22 = 954192968U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
