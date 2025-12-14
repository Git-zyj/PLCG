#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1002558363U;
int var_5 = -559758272;
int var_6 = 1181879369;
int var_9 = 1720366824;
short var_15 = (short)12042;
unsigned int var_17 = 4131448472U;
int zero = 0;
int var_18 = -105443194;
signed char var_19 = (signed char)32;
long long int var_20 = -8681604297199695013LL;
void init() {
}

void checksum() {
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
