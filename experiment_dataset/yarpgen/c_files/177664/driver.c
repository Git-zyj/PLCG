#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)123;
short var_5 = (short)13464;
short var_17 = (short)8328;
int var_19 = 1172517354;
int zero = 0;
short var_20 = (short)-13202;
int var_21 = 1830531950;
unsigned int var_22 = 1675238864U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
