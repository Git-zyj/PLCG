#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)16;
signed char var_1 = (signed char)107;
int var_2 = 647628174;
unsigned int var_3 = 3231625300U;
int var_5 = -706854701;
unsigned int var_6 = 2137090429U;
signed char var_7 = (signed char)18;
signed char var_8 = (signed char)18;
int zero = 0;
int var_12 = -212484989;
int var_13 = -283416945;
int var_14 = -227874837;
void init() {
}

void checksum() {
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
