#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4384990449647022372LL;
unsigned char var_3 = (unsigned char)200;
unsigned int var_5 = 177955103U;
int zero = 0;
int var_10 = 824537299;
long long int var_11 = 2016427860639542208LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
