#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1107053170;
unsigned int var_4 = 1099889972U;
short var_9 = (short)-23309;
unsigned long long int var_13 = 13401607166796106961ULL;
int zero = 0;
short var_16 = (short)-24885;
unsigned char var_17 = (unsigned char)213;
void init() {
}

void checksum() {
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
