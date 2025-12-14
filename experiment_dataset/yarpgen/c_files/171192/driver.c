#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4065800617U;
signed char var_11 = (signed char)94;
unsigned int var_12 = 2527161230U;
unsigned long long int var_16 = 9597263034511333135ULL;
unsigned char var_17 = (unsigned char)19;
long long int var_19 = 9065700841383491185LL;
int zero = 0;
unsigned long long int var_20 = 415266597050705056ULL;
unsigned char var_21 = (unsigned char)214;
unsigned int var_22 = 626629853U;
int var_23 = 1739090794;
unsigned short var_24 = (unsigned short)2560;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
