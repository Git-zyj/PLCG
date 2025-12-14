#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1947710352;
unsigned int var_7 = 1338468992U;
unsigned long long int var_10 = 6730594720269081350ULL;
int zero = 0;
unsigned long long int var_13 = 13240074466448374917ULL;
long long int var_14 = -2057526339035343957LL;
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
