#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14996552552740729306ULL;
unsigned long long int var_1 = 2747555476057578563ULL;
unsigned long long int var_3 = 8105659736795449708ULL;
int zero = 0;
long long int var_11 = -829331468885682540LL;
unsigned long long int var_12 = 11350150349705096332ULL;
unsigned int var_13 = 2268710618U;
int var_14 = -149490128;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
