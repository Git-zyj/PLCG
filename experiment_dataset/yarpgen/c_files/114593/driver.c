#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12095;
short var_7 = (short)-11317;
int var_8 = 2132008272;
int var_11 = -1562379438;
int zero = 0;
short var_14 = (short)26091;
int var_15 = -1622188049;
short var_16 = (short)-13822;
short var_17 = (short)7653;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
