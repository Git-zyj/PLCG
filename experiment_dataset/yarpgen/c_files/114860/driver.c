#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1455467211;
signed char var_3 = (signed char)76;
unsigned int var_4 = 1852080794U;
unsigned char var_5 = (unsigned char)231;
unsigned int var_7 = 3362599042U;
unsigned short var_12 = (unsigned short)25290;
int zero = 0;
unsigned long long int var_13 = 16984934031210664196ULL;
unsigned short var_14 = (unsigned short)28752;
long long int var_15 = -2509484317371339930LL;
short var_16 = (short)-21019;
long long int var_17 = 598107378020766425LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
