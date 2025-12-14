#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3530032927U;
unsigned long long int var_3 = 11366648101839009076ULL;
int var_4 = 74740687;
signed char var_6 = (signed char)2;
unsigned int var_7 = 1562627576U;
short var_8 = (short)-17803;
unsigned short var_9 = (unsigned short)43818;
unsigned int var_10 = 2247704453U;
short var_11 = (short)-7319;
int var_12 = 1538900834;
int zero = 0;
unsigned int var_13 = 2762857644U;
unsigned int var_14 = 1552865975U;
short var_15 = (short)-564;
unsigned int var_16 = 3502360489U;
unsigned int var_17 = 155281887U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
