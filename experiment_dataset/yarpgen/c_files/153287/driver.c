#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -342599189;
unsigned char var_2 = (unsigned char)20;
unsigned long long int var_6 = 4166712030330811443ULL;
signed char var_10 = (signed char)-70;
long long int var_11 = -1068941575466858077LL;
int zero = 0;
unsigned short var_12 = (unsigned short)49662;
signed char var_13 = (signed char)66;
unsigned short var_14 = (unsigned short)9977;
unsigned long long int var_15 = 11225002916465066759ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
