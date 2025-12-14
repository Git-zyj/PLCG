#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)849;
signed char var_9 = (signed char)-100;
int var_10 = 987215513;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)227;
unsigned char var_15 = (unsigned char)108;
short var_16 = (short)25569;
int zero = 0;
unsigned long long int var_17 = 9625082540053494358ULL;
unsigned int var_18 = 2814474792U;
short var_19 = (short)24535;
void init() {
}

void checksum() {
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
