#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_12 = (short)5864;
int var_14 = -54711007;
int zero = 0;
unsigned int var_16 = 2573220100U;
unsigned char var_17 = (unsigned char)112;
unsigned char var_18 = (unsigned char)199;
unsigned int var_19 = 520492092U;
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
