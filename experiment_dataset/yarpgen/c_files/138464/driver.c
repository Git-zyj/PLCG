#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-90;
short var_1 = (short)-5453;
int var_2 = 1650033778;
int var_4 = 2125104894;
signed char var_7 = (signed char)52;
int var_8 = 693172122;
signed char var_10 = (signed char)-56;
int zero = 0;
int var_11 = 462420450;
signed char var_12 = (signed char)53;
int var_13 = 1761772186;
short var_14 = (short)13296;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
