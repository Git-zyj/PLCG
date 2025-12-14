#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)182;
unsigned long long int var_7 = 10503563526827090396ULL;
unsigned long long int var_8 = 10044506380812969769ULL;
signed char var_9 = (signed char)-120;
unsigned short var_12 = (unsigned short)31841;
unsigned char var_13 = (unsigned char)249;
int zero = 0;
signed char var_17 = (signed char)115;
long long int var_18 = -7515520486477980690LL;
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
