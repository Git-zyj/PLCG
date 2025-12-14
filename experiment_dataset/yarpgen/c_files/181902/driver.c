#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1611751033;
long long int var_1 = 314622617904329012LL;
unsigned long long int var_2 = 15117744181394574973ULL;
unsigned int var_3 = 2925171693U;
unsigned char var_4 = (unsigned char)158;
short var_5 = (short)14997;
short var_9 = (short)17579;
unsigned char var_10 = (unsigned char)27;
unsigned char var_11 = (unsigned char)12;
long long int var_13 = 7870361033005151655LL;
int zero = 0;
short var_15 = (short)10125;
short var_16 = (short)-1564;
signed char var_17 = (signed char)59;
unsigned long long int var_18 = 16847546127929545927ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
