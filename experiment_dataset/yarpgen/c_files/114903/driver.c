#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2025385379;
int var_3 = 1558969973;
int var_4 = -1856392998;
signed char var_7 = (signed char)-38;
unsigned long long int var_9 = 961479486364236861ULL;
int var_10 = -1983094142;
int var_12 = 61735039;
short var_13 = (short)20805;
int zero = 0;
int var_14 = -1759535925;
int var_15 = -733561662;
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
