#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11180043246349864723ULL;
unsigned long long int var_1 = 13386883658745377807ULL;
long long int var_6 = 9192362963427803133LL;
short var_10 = (short)-26459;
long long int var_11 = -9085029049841114705LL;
unsigned int var_14 = 3198682477U;
int zero = 0;
short var_18 = (short)-12850;
unsigned char var_19 = (unsigned char)48;
int var_20 = -173728634;
short var_21 = (short)578;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
