#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1249730736U;
long long int var_5 = 6407231508778423209LL;
unsigned int var_11 = 3406825963U;
short var_13 = (short)31479;
int zero = 0;
int var_14 = -1378812359;
unsigned int var_15 = 5720218U;
int var_16 = -1153436530;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
