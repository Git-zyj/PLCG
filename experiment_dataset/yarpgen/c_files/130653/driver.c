#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 680443239U;
unsigned int var_10 = 551113467U;
unsigned int var_12 = 2882160453U;
int zero = 0;
unsigned int var_14 = 3359446471U;
unsigned int var_15 = 1629403073U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
