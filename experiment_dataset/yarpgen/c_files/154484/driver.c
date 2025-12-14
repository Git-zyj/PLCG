#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10313002416760887899ULL;
unsigned long long int var_5 = 4678441673239592188ULL;
short var_10 = (short)-32641;
unsigned short var_11 = (unsigned short)35112;
long long int var_12 = 5585765580277747505LL;
int zero = 0;
unsigned long long int var_18 = 360789365372286047ULL;
unsigned short var_19 = (unsigned short)51127;
signed char var_20 = (signed char)19;
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
