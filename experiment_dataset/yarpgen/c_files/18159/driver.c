#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)93;
int var_6 = -1770258440;
unsigned char var_8 = (unsigned char)90;
signed char var_9 = (signed char)83;
unsigned int var_10 = 1750370711U;
int zero = 0;
unsigned char var_12 = (unsigned char)66;
int var_13 = 1213624023;
int var_14 = -1899214107;
int var_15 = 486944476;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
