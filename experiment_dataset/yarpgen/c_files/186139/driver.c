#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)112;
int var_6 = -300517487;
short var_8 = (short)32497;
unsigned long long int var_10 = 8294247071754841929ULL;
unsigned int var_13 = 2707351734U;
int zero = 0;
signed char var_16 = (signed char)17;
signed char var_17 = (signed char)27;
unsigned long long int var_18 = 13391275053489737268ULL;
void init() {
}

void checksum() {
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
