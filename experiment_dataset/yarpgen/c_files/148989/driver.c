#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9427;
long long int var_7 = 7453804773126257392LL;
short var_9 = (short)30942;
int zero = 0;
short var_14 = (short)-27006;
unsigned long long int var_15 = 15321165566498821536ULL;
unsigned char var_16 = (unsigned char)45;
unsigned int var_17 = 4109345794U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
