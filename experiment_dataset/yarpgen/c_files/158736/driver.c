#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)64756;
short var_5 = (short)-32337;
unsigned long long int var_8 = 3727393075353820436ULL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-21493;
int var_12 = 235616528;
unsigned long long int var_15 = 7554797197077237311ULL;
unsigned int var_16 = 1949563540U;
int zero = 0;
short var_18 = (short)-5289;
unsigned long long int var_19 = 16115618424492979458ULL;
void init() {
}

void checksum() {
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
