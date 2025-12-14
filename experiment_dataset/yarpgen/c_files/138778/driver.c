#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1456135097;
unsigned long long int var_9 = 14431771025014802552ULL;
unsigned int var_10 = 522264471U;
long long int var_17 = -4071179493596988315LL;
int zero = 0;
short var_18 = (short)-14588;
short var_19 = (short)-22715;
long long int var_20 = 5744028461031817265LL;
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
