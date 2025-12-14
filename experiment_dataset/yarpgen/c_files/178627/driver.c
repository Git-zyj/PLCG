#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31639;
_Bool var_1 = (_Bool)1;
int var_3 = 2082165782;
signed char var_4 = (signed char)11;
signed char var_5 = (signed char)-8;
unsigned long long int var_6 = 7748099943697749447ULL;
unsigned int var_7 = 4107852473U;
long long int var_11 = 5704990505407494161LL;
unsigned long long int var_12 = 4944854770264577965ULL;
int zero = 0;
unsigned int var_14 = 4179956991U;
unsigned long long int var_15 = 16370228012803271855ULL;
short var_16 = (short)-13247;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
