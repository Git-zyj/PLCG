#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11131747862688247511ULL;
long long int var_3 = -2655436977128652662LL;
unsigned long long int var_8 = 14674118304129037577ULL;
int zero = 0;
long long int var_11 = -4844272943049651156LL;
unsigned long long int var_12 = 15010440474741954822ULL;
long long int var_13 = -4525579555679246667LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
