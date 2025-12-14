#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2082618288;
unsigned int var_3 = 2201617526U;
unsigned int var_4 = 4185441660U;
short var_7 = (short)-616;
unsigned int var_8 = 2209971875U;
short var_11 = (short)1884;
int zero = 0;
int var_12 = 768570201;
unsigned int var_13 = 612299988U;
short var_14 = (short)16319;
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
