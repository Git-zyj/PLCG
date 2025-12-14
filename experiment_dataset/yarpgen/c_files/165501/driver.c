#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 6619744675935640720LL;
int var_7 = 1855773108;
signed char var_9 = (signed char)122;
unsigned char var_11 = (unsigned char)240;
unsigned char var_12 = (unsigned char)72;
unsigned int var_14 = 2814711169U;
unsigned char var_18 = (unsigned char)200;
int zero = 0;
unsigned char var_19 = (unsigned char)75;
unsigned int var_20 = 2534100448U;
unsigned long long int var_21 = 2956427792236035205ULL;
void init() {
}

void checksum() {
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
