#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2883222917U;
long long int var_1 = 2925220250602835439LL;
short var_2 = (short)30379;
int var_3 = 551749906;
unsigned int var_7 = 920950042U;
unsigned long long int var_8 = 1973931537749325437ULL;
short var_10 = (short)-31743;
int zero = 0;
int var_11 = 1887711108;
unsigned int var_12 = 459794446U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
