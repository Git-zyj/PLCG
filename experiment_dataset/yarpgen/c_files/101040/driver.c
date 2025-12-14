#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-7627;
unsigned long long int var_10 = 11869964474901716645ULL;
signed char var_11 = (signed char)-37;
signed char var_12 = (signed char)-46;
unsigned short var_13 = (unsigned short)8932;
int zero = 0;
unsigned short var_16 = (unsigned short)51972;
unsigned short var_17 = (unsigned short)22176;
unsigned int var_18 = 3204062009U;
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
