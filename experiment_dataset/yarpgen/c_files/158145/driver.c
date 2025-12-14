#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7395866458442580560LL;
unsigned int var_4 = 977090510U;
unsigned int var_10 = 1897412419U;
int zero = 0;
int var_13 = 1056963549;
long long int var_14 = 6771537670359256344LL;
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
