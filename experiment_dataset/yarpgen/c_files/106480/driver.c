#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64907;
int var_6 = -1620967734;
unsigned short var_8 = (unsigned short)21285;
short var_11 = (short)-17672;
short var_15 = (short)27315;
int zero = 0;
signed char var_20 = (signed char)91;
unsigned long long int var_21 = 12451351568925532571ULL;
void init() {
}

void checksum() {
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
