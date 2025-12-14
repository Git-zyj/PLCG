#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)12958;
signed char var_7 = (signed char)28;
unsigned long long int var_10 = 5696864162094866818ULL;
unsigned char var_11 = (unsigned char)109;
int var_12 = 790366446;
int zero = 0;
short var_17 = (short)2980;
int var_18 = -1964907106;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
