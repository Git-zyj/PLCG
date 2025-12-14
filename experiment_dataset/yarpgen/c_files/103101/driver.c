#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)28210;
signed char var_7 = (signed char)36;
short var_8 = (short)-12549;
unsigned int var_9 = 1468600597U;
int zero = 0;
short var_11 = (short)28323;
unsigned char var_12 = (unsigned char)223;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
