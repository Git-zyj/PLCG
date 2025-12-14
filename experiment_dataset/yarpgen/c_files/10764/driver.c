#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 516754898;
unsigned long long int var_3 = 8182345210256870544ULL;
int var_7 = 1324207957;
int var_8 = 2000577263;
signed char var_10 = (signed char)49;
short var_17 = (short)29806;
int zero = 0;
unsigned int var_18 = 860956212U;
unsigned char var_19 = (unsigned char)124;
void init() {
}

void checksum() {
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
