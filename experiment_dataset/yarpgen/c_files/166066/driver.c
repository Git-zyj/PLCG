#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-4761;
signed char var_6 = (signed char)126;
unsigned long long int var_8 = 1419267653136887745ULL;
unsigned int var_13 = 230052562U;
unsigned int var_15 = 1436157834U;
int zero = 0;
int var_16 = 181047205;
int var_17 = -1558095377;
void init() {
}

void checksum() {
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
