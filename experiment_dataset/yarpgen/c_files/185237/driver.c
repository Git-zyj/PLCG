#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22661;
unsigned long long int var_1 = 10219765583719388677ULL;
unsigned int var_5 = 3221312772U;
long long int var_7 = 9135881289895375941LL;
unsigned long long int var_10 = 15513803902128525183ULL;
int zero = 0;
long long int var_12 = -29307872011199994LL;
long long int var_13 = 2456524237034064734LL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
