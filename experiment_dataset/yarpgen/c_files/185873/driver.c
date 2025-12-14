#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)29417;
short var_4 = (short)-21893;
int var_8 = 1439625368;
int zero = 0;
unsigned long long int var_12 = 7439994906098630983ULL;
unsigned char var_13 = (unsigned char)210;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
