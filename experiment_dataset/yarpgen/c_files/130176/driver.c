#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2280647608U;
unsigned short var_4 = (unsigned short)36221;
unsigned int var_5 = 830808419U;
int var_9 = -1400611639;
short var_10 = (short)-31259;
int var_13 = 2076519499;
int zero = 0;
signed char var_14 = (signed char)37;
int var_15 = -382934555;
int var_16 = 42664210;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
