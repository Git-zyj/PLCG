#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 11896638758913485516ULL;
signed char var_10 = (signed char)107;
short var_12 = (short)28531;
int zero = 0;
unsigned long long int var_17 = 4498927368232834703ULL;
unsigned short var_18 = (unsigned short)60496;
unsigned short var_19 = (unsigned short)8575;
unsigned long long int var_20 = 16309849765473850596ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
