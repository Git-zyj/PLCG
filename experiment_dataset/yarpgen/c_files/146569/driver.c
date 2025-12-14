#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1309633614;
signed char var_1 = (signed char)67;
signed char var_2 = (signed char)-12;
signed char var_3 = (signed char)-104;
int var_4 = 1060425515;
int var_5 = -1961025219;
signed char var_6 = (signed char)-95;
signed char var_8 = (signed char)87;
signed char var_10 = (signed char)-77;
int var_11 = -1727187957;
signed char var_12 = (signed char)-8;
int zero = 0;
int var_13 = 1916875136;
int var_14 = 1030844522;
int var_15 = -1199019331;
signed char var_16 = (signed char)-115;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
