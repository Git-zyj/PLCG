#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4862988270779290898ULL;
unsigned long long int var_4 = 483074613825521823ULL;
long long int var_6 = 8655648269257433787LL;
signed char var_14 = (signed char)-61;
long long int var_15 = 353750113486638967LL;
int zero = 0;
unsigned int var_16 = 1685922345U;
short var_17 = (short)-29697;
long long int var_18 = -6863389452947620381LL;
int var_19 = -1222312767;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
