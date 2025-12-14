#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 245148157U;
int var_1 = -1362681657;
signed char var_8 = (signed char)34;
short var_9 = (short)-8283;
int zero = 0;
unsigned char var_16 = (unsigned char)211;
unsigned short var_17 = (unsigned short)29052;
unsigned long long int var_18 = 14885554841296106510ULL;
short var_19 = (short)-21799;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
