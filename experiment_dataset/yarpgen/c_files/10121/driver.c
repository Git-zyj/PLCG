#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-56;
signed char var_1 = (signed char)-98;
unsigned short var_2 = (unsigned short)38525;
short var_3 = (short)-23393;
short var_4 = (short)973;
unsigned short var_5 = (unsigned short)11143;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 3616236749166504685ULL;
unsigned char var_12 = (unsigned char)173;
unsigned long long int var_13 = 6912186419432125593ULL;
unsigned char var_14 = (unsigned char)32;
int zero = 0;
unsigned int var_15 = 2092022725U;
int var_16 = 1773061582;
unsigned char var_17 = (unsigned char)41;
unsigned int var_18 = 2888688911U;
unsigned long long int var_19 = 6561672767989858591ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
