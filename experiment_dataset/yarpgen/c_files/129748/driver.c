#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 212773902U;
int var_2 = 2057592240;
unsigned long long int var_6 = 6576195797379299033ULL;
signed char var_8 = (signed char)-39;
int var_10 = 1516209802;
short var_11 = (short)-21352;
unsigned int var_12 = 757048403U;
int zero = 0;
unsigned int var_13 = 283947472U;
unsigned short var_14 = (unsigned short)54536;
long long int var_15 = 1558581299050967085LL;
int var_16 = 1499721675;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
