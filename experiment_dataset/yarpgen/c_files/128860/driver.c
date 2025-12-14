#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14779579418372194685ULL;
unsigned int var_5 = 2516250250U;
unsigned long long int var_6 = 1906416615505701085ULL;
int var_9 = 1095801478;
signed char var_10 = (signed char)-88;
unsigned char var_11 = (unsigned char)211;
int zero = 0;
unsigned int var_13 = 209358794U;
unsigned char var_14 = (unsigned char)131;
short var_15 = (short)-2762;
void init() {
}

void checksum() {
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
