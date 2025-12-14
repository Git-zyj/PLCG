#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7038689434145689937LL;
short var_7 = (short)-2182;
unsigned short var_10 = (unsigned short)27404;
short var_11 = (short)21205;
int zero = 0;
unsigned char var_12 = (unsigned char)159;
signed char var_13 = (signed char)113;
int var_14 = -908909137;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
