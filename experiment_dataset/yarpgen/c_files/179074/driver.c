#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 7252540753469231644ULL;
unsigned int var_7 = 980844930U;
unsigned int var_11 = 3471557377U;
int zero = 0;
unsigned int var_13 = 3078772515U;
unsigned long long int var_14 = 7393530373400118545ULL;
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
