#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16238418246944789229ULL;
unsigned char var_6 = (unsigned char)43;
unsigned char var_8 = (unsigned char)172;
int zero = 0;
signed char var_10 = (signed char)63;
unsigned long long int var_11 = 5792905498989381769ULL;
signed char var_12 = (signed char)109;
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
