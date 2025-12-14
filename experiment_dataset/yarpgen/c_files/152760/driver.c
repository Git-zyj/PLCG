#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4143408403133853052ULL;
int var_2 = -26554067;
unsigned char var_7 = (unsigned char)2;
unsigned long long int var_12 = 6616651967589516953ULL;
signed char var_17 = (signed char)-7;
int zero = 0;
unsigned long long int var_20 = 4240164339865877504ULL;
long long int var_21 = -7966638124495542507LL;
unsigned long long int var_22 = 6244645490882178584ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
