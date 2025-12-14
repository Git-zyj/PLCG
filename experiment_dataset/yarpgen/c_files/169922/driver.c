#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1630569177;
unsigned int var_2 = 3908845529U;
unsigned long long int var_7 = 12863678717028261716ULL;
int var_14 = -1747001125;
unsigned int var_15 = 3895397928U;
int zero = 0;
signed char var_17 = (signed char)51;
short var_18 = (short)-11598;
int var_19 = 830306495;
unsigned int var_20 = 2252514006U;
int var_21 = -1712752039;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
