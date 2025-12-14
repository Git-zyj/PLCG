#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5801909423202696033ULL;
short var_4 = (short)-10722;
unsigned long long int var_6 = 10759453522412438993ULL;
unsigned int var_7 = 3792436867U;
unsigned int var_10 = 3182858787U;
int zero = 0;
unsigned long long int var_16 = 12270962818714490849ULL;
short var_17 = (short)-6648;
long long int var_18 = -6221501666176466645LL;
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
