#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-33;
unsigned long long int var_9 = 7532608217051302018ULL;
long long int var_12 = -7393197986816970637LL;
int zero = 0;
unsigned char var_15 = (unsigned char)59;
unsigned long long int var_16 = 10789259935035139433ULL;
short var_17 = (short)12790;
long long int var_18 = 3003539765469234483LL;
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
