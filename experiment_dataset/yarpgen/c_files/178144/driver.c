#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 7658498172304236643LL;
short var_11 = (short)-20870;
unsigned long long int var_13 = 9140375902414688690ULL;
int zero = 0;
unsigned long long int var_14 = 4304082195743285771ULL;
int var_15 = 964541486;
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
