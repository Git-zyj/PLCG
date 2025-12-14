#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1055012047172291675ULL;
signed char var_6 = (signed char)83;
unsigned char var_9 = (unsigned char)70;
int zero = 0;
unsigned char var_10 = (unsigned char)123;
unsigned long long int var_11 = 11303164513003614386ULL;
unsigned char var_12 = (unsigned char)240;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
