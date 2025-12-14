#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2041795062;
unsigned char var_8 = (unsigned char)93;
unsigned short var_9 = (unsigned short)14869;
unsigned int var_15 = 1371729783U;
unsigned short var_16 = (unsigned short)32159;
int zero = 0;
int var_19 = -826963931;
int var_20 = 1697217631;
short var_21 = (short)2009;
signed char var_22 = (signed char)95;
unsigned int var_23 = 102666838U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
