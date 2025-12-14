#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2920290010U;
unsigned int var_1 = 2785744801U;
unsigned int var_3 = 3007513645U;
unsigned int var_4 = 2735255800U;
short var_11 = (short)-5967;
int var_12 = -1752498483;
int zero = 0;
short var_13 = (short)-15658;
signed char var_14 = (signed char)48;
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
