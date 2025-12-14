#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17964514125435451986ULL;
long long int var_6 = 6879120456924884533LL;
int var_13 = -1635419719;
int zero = 0;
signed char var_14 = (signed char)45;
long long int var_15 = -8144061708765483212LL;
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
