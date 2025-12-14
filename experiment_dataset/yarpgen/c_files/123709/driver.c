#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8653457696509259926LL;
int var_2 = -1825494492;
unsigned int var_5 = 1821448376U;
unsigned char var_9 = (unsigned char)223;
unsigned char var_14 = (unsigned char)146;
int zero = 0;
signed char var_16 = (signed char)-50;
unsigned long long int var_17 = 1375411782521173233ULL;
short var_18 = (short)-12264;
int var_19 = 1185057610;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
