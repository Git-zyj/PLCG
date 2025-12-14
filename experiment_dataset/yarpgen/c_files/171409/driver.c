#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_11 = (short)-12294;
signed char var_12 = (signed char)5;
signed char var_14 = (signed char)98;
int zero = 0;
short var_16 = (short)23401;
unsigned short var_17 = (unsigned short)5440;
unsigned short var_18 = (unsigned short)26879;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
