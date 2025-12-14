#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14604055582141074539ULL;
long long int var_7 = -5005103734775557269LL;
long long int var_9 = 8444893626803442981LL;
long long int var_12 = 4297398771351312678LL;
int zero = 0;
unsigned long long int var_14 = 14619226485232818347ULL;
long long int var_15 = -4014023644892647203LL;
unsigned int var_16 = 460462783U;
unsigned int var_17 = 3462825931U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
