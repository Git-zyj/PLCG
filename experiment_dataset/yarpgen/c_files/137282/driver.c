#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8839316020724162490LL;
unsigned int var_1 = 864592469U;
short var_4 = (short)-18315;
unsigned char var_6 = (unsigned char)229;
long long int var_7 = 5909437910001246833LL;
long long int var_8 = -8848763267893684208LL;
long long int var_9 = 1776297172647938515LL;
unsigned long long int var_10 = 7990775186359942208ULL;
int zero = 0;
unsigned int var_11 = 3549207189U;
long long int var_12 = -1417990925306101537LL;
unsigned char var_13 = (unsigned char)4;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
