#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -920831712;
unsigned long long int var_1 = 5397511095722375623ULL;
unsigned short var_4 = (unsigned short)37522;
unsigned short var_6 = (unsigned short)8363;
unsigned long long int var_11 = 4796677885776816099ULL;
unsigned long long int var_12 = 7794915324793063767ULL;
unsigned short var_14 = (unsigned short)1263;
int zero = 0;
unsigned long long int var_16 = 4289636578209781279ULL;
unsigned short var_17 = (unsigned short)27854;
int var_18 = 1477129197;
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
