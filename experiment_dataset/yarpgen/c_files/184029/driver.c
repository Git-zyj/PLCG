#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7969902748402035730ULL;
unsigned long long int var_1 = 10032076558754863672ULL;
unsigned long long int var_2 = 8263909087651097252ULL;
unsigned int var_4 = 3398502417U;
unsigned int var_9 = 3840779603U;
int zero = 0;
unsigned int var_13 = 2332014808U;
unsigned long long int var_14 = 13749481653136142420ULL;
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
