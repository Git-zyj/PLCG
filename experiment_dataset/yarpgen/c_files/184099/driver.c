#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2974321244U;
long long int var_3 = -3488169940042758316LL;
short var_10 = (short)20547;
short var_13 = (short)-3873;
int zero = 0;
unsigned int var_15 = 2647623930U;
unsigned int var_16 = 3886935769U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
