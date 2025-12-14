#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-116;
unsigned long long int var_1 = 13807238762867852680ULL;
short var_2 = (short)-21695;
short var_6 = (short)-24423;
unsigned short var_11 = (unsigned short)14905;
int zero = 0;
unsigned long long int var_14 = 12920734273088155974ULL;
signed char var_15 = (signed char)41;
unsigned short var_16 = (unsigned short)42236;
void init() {
}

void checksum() {
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
