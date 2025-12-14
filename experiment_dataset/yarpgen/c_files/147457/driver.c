#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)74;
short var_2 = (short)-22036;
long long int var_5 = -2633571401225440867LL;
unsigned short var_8 = (unsigned short)37514;
short var_9 = (short)-26024;
long long int var_11 = 4600952254844804470LL;
short var_12 = (short)-7458;
int zero = 0;
unsigned short var_15 = (unsigned short)34527;
signed char var_16 = (signed char)116;
long long int var_17 = 9052852187014741688LL;
long long int var_18 = 1850969025393144497LL;
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
