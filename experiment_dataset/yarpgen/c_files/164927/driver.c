#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)183;
int var_7 = 1107500688;
int zero = 0;
unsigned long long int var_10 = 18037505769677426551ULL;
unsigned short var_11 = (unsigned short)48920;
unsigned char var_12 = (unsigned char)115;
unsigned long long int var_13 = 12691317723817144376ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
