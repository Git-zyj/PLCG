#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1285236402;
int var_2 = 1950345235;
long long int var_4 = 2310560676294495734LL;
long long int var_7 = -4508879748625693208LL;
int var_9 = 1664515339;
long long int var_10 = 9139201241599171023LL;
int var_11 = 35715885;
int var_12 = 269399036;
int var_13 = 269957343;
int zero = 0;
long long int var_14 = 6698841275475546156LL;
long long int var_15 = -5276010053540150213LL;
signed char var_16 = (signed char)70;
int var_17 = -747034373;
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
