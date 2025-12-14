#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5957016916946585302LL;
short var_5 = (short)-7376;
unsigned int var_6 = 472450912U;
unsigned long long int var_8 = 11353973106068911732ULL;
unsigned int var_13 = 3178600188U;
int zero = 0;
short var_15 = (short)-15315;
unsigned short var_16 = (unsigned short)3155;
void init() {
}

void checksum() {
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
