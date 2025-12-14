#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
signed char var_8 = (signed char)-61;
signed char var_10 = (signed char)-86;
signed char var_12 = (signed char)123;
int zero = 0;
unsigned short var_15 = (unsigned short)16411;
unsigned char var_16 = (unsigned char)241;
int var_17 = 1640541825;
unsigned short var_18 = (unsigned short)2834;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
