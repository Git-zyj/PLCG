#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31206;
unsigned int var_2 = 2255508382U;
unsigned char var_3 = (unsigned char)45;
long long int var_7 = -4357070382381701733LL;
short var_9 = (short)-22230;
unsigned int var_10 = 352960389U;
short var_13 = (short)25496;
signed char var_14 = (signed char)19;
unsigned long long int var_15 = 11523299897448469157ULL;
int zero = 0;
unsigned int var_19 = 3812967307U;
signed char var_20 = (signed char)56;
void init() {
}

void checksum() {
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
