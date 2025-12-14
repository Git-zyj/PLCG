#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7549617860030946278LL;
unsigned int var_2 = 927829503U;
signed char var_5 = (signed char)34;
int zero = 0;
unsigned int var_10 = 2322409425U;
unsigned long long int var_11 = 9404417489711430176ULL;
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
