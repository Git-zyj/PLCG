#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-32130;
long long int var_6 = -3513994974868725156LL;
int var_7 = -2009203090;
unsigned long long int var_11 = 5405745591683031981ULL;
int zero = 0;
long long int var_17 = -6052143531182008859LL;
short var_18 = (short)-23826;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
