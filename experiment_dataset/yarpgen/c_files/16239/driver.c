#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)95;
unsigned char var_8 = (unsigned char)252;
unsigned short var_10 = (unsigned short)59738;
int zero = 0;
unsigned short var_11 = (unsigned short)61706;
unsigned long long int var_12 = 15945282915708535935ULL;
unsigned short var_13 = (unsigned short)21026;
unsigned int var_14 = 2548149292U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
