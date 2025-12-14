#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)166;
unsigned char var_10 = (unsigned char)13;
long long int var_11 = -2883344497953567886LL;
int zero = 0;
int var_12 = 756565652;
int var_13 = -1473540061;
signed char var_14 = (signed char)-15;
unsigned short var_15 = (unsigned short)44882;
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
