#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)171;
long long int var_1 = 2270130938390641383LL;
unsigned long long int var_7 = 5615271679115100655ULL;
long long int var_9 = -7738231582381244983LL;
unsigned char var_11 = (unsigned char)147;
unsigned long long int var_12 = 7061394513035427018ULL;
int zero = 0;
signed char var_13 = (signed char)5;
unsigned char var_14 = (unsigned char)225;
unsigned long long int var_15 = 4023402457796591202ULL;
unsigned char var_16 = (unsigned char)198;
unsigned char var_17 = (unsigned char)160;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
