#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3208236040U;
signed char var_12 = (signed char)78;
short var_15 = (short)-10797;
int zero = 0;
int var_19 = -2016252624;
unsigned int var_20 = 2842464625U;
unsigned int var_21 = 287564572U;
void init() {
}

void checksum() {
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
