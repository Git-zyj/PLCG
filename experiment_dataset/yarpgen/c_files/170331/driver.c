#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15291099999440894075ULL;
signed char var_4 = (signed char)-88;
unsigned char var_5 = (unsigned char)85;
unsigned char var_6 = (unsigned char)24;
short var_9 = (short)-11431;
unsigned char var_11 = (unsigned char)221;
int zero = 0;
unsigned short var_13 = (unsigned short)17402;
short var_14 = (short)31641;
void init() {
}

void checksum() {
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
