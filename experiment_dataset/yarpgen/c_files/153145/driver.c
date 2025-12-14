#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1006089021;
unsigned int var_1 = 631314538U;
unsigned long long int var_2 = 1167030498955791875ULL;
short var_4 = (short)-13240;
unsigned int var_5 = 3877784555U;
signed char var_6 = (signed char)63;
signed char var_7 = (signed char)-113;
unsigned char var_8 = (unsigned char)184;
unsigned long long int var_9 = 8778265320626748885ULL;
signed char var_11 = (signed char)-30;
unsigned long long int var_12 = 16329382502554928129ULL;
_Bool var_13 = (_Bool)0;
int var_15 = -373396487;
int zero = 0;
signed char var_16 = (signed char)31;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 11787187873854304489ULL;
void init() {
}

void checksum() {
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
