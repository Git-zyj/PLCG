#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45420;
short var_1 = (short)-14949;
unsigned long long int var_2 = 15608072529635642039ULL;
unsigned short var_4 = (unsigned short)1911;
unsigned short var_10 = (unsigned short)40786;
unsigned char var_15 = (unsigned char)163;
signed char var_16 = (signed char)-123;
int zero = 0;
short var_18 = (short)28073;
unsigned int var_19 = 3942313226U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
