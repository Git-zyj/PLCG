#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11892375300637582716ULL;
unsigned short var_6 = (unsigned short)41180;
short var_7 = (short)-31265;
signed char var_9 = (signed char)88;
int var_10 = -695398049;
unsigned short var_11 = (unsigned short)5522;
signed char var_13 = (signed char)17;
unsigned int var_14 = 2284464223U;
unsigned long long int var_15 = 456457311951088955ULL;
short var_16 = (short)15410;
int zero = 0;
unsigned short var_17 = (unsigned short)20661;
unsigned short var_18 = (unsigned short)13339;
unsigned char var_19 = (unsigned char)211;
unsigned long long int var_20 = 10878953470942355612ULL;
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
