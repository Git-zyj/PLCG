#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)34;
signed char var_6 = (signed char)5;
unsigned long long int var_10 = 13514667992884405102ULL;
signed char var_11 = (signed char)112;
unsigned char var_12 = (unsigned char)44;
int zero = 0;
int var_16 = -829408356;
int var_17 = -195328013;
unsigned char var_18 = (unsigned char)215;
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
