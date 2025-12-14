#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)196;
unsigned char var_6 = (unsigned char)249;
signed char var_10 = (signed char)41;
int var_12 = 1679161891;
int zero = 0;
short var_16 = (short)12464;
unsigned long long int var_17 = 13948391417571700781ULL;
unsigned long long int var_18 = 10035502527333358132ULL;
unsigned char var_19 = (unsigned char)229;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
