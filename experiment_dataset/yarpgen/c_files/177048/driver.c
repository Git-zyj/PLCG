#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -717035394;
unsigned long long int var_9 = 16350562937559204629ULL;
unsigned int var_11 = 2010392980U;
signed char var_12 = (signed char)-119;
int var_15 = -1246109859;
int var_16 = 419414518;
short var_18 = (short)8096;
long long int var_19 = -637188425653381828LL;
int zero = 0;
int var_20 = 1718813159;
signed char var_21 = (signed char)-13;
unsigned int var_22 = 4090226190U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
