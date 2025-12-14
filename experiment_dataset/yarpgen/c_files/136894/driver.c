#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1668815847348500975LL;
short var_1 = (short)16356;
signed char var_3 = (signed char)120;
unsigned char var_4 = (unsigned char)15;
unsigned int var_5 = 1917437241U;
unsigned int var_8 = 4255862681U;
unsigned char var_10 = (unsigned char)5;
int var_11 = -2067147338;
unsigned long long int var_12 = 3847594110263711680ULL;
signed char var_13 = (signed char)111;
unsigned long long int var_15 = 14263827652351003835ULL;
int zero = 0;
unsigned int var_17 = 2911746394U;
unsigned long long int var_18 = 13540562073484025151ULL;
unsigned long long int var_19 = 7501988641135868855ULL;
short var_20 = (short)-8467;
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
