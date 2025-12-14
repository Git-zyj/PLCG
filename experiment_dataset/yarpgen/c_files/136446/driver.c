#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)60;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)246;
signed char var_13 = (signed char)92;
signed char var_15 = (signed char)9;
int var_16 = -1212965081;
long long int var_17 = 5209623886718357391LL;
int zero = 0;
unsigned long long int var_18 = 14740486041075912638ULL;
unsigned short var_19 = (unsigned short)33861;
int var_20 = 21541058;
unsigned int var_21 = 1505273350U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
