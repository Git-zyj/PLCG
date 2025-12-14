#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)213;
signed char var_5 = (signed char)-119;
int var_8 = -1168610002;
unsigned int var_9 = 1500565626U;
unsigned long long int var_12 = 9659122696569984956ULL;
short var_14 = (short)7972;
long long int var_16 = 288258450709622771LL;
unsigned long long int var_17 = 10448051209071804101ULL;
int zero = 0;
unsigned long long int var_18 = 17374761489337911083ULL;
unsigned char var_19 = (unsigned char)204;
short var_20 = (short)-16666;
short var_21 = (short)-13026;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
