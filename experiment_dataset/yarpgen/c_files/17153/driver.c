#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)178;
int var_10 = 2145378506;
int var_11 = -1073325856;
int zero = 0;
signed char var_13 = (signed char)85;
int var_14 = -301208704;
int var_15 = -120082013;
int var_16 = 1810018132;
unsigned short var_17 = (unsigned short)35561;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
