#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4217854045U;
unsigned int var_2 = 364113777U;
unsigned long long int var_4 = 11992621685397796068ULL;
unsigned int var_7 = 1013686100U;
unsigned short var_9 = (unsigned short)45697;
unsigned short var_11 = (unsigned short)45814;
unsigned int var_12 = 3636447765U;
int zero = 0;
unsigned short var_15 = (unsigned short)32436;
unsigned short var_16 = (unsigned short)59276;
unsigned long long int var_17 = 4238177760932949196ULL;
void init() {
}

void checksum() {
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
