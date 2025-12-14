#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6907454664384177237LL;
unsigned long long int var_6 = 10953509739942852148ULL;
unsigned long long int var_11 = 15577412599093023735ULL;
int zero = 0;
unsigned long long int var_15 = 3046739949160415639ULL;
unsigned long long int var_16 = 3234788748962529522ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
