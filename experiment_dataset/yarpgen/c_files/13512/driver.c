#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14512083510256153074ULL;
signed char var_2 = (signed char)-123;
unsigned int var_5 = 1387928107U;
unsigned int var_8 = 1828065391U;
unsigned short var_10 = (unsigned short)20501;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 852264333U;
int var_16 = 771563601;
signed char var_17 = (signed char)66;
long long int var_18 = 1272690536319376962LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
