#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39528;
unsigned int var_1 = 2185429686U;
long long int var_2 = 4042314678945179324LL;
unsigned char var_3 = (unsigned char)167;
long long int var_4 = -5104579030501911265LL;
signed char var_5 = (signed char)1;
unsigned char var_6 = (unsigned char)89;
_Bool var_7 = (_Bool)1;
int var_8 = 1439067797;
signed char var_9 = (signed char)-125;
unsigned int var_10 = 1607028774U;
unsigned long long int var_11 = 184360592200240462ULL;
unsigned int var_12 = 2684195890U;
unsigned char var_13 = (unsigned char)190;
int zero = 0;
int var_14 = -1837859097;
unsigned int var_15 = 3029080733U;
unsigned char var_16 = (unsigned char)193;
void init() {
}

void checksum() {
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
