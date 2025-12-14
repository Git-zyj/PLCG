#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1817556692U;
int var_5 = -1269132248;
unsigned int var_6 = 377288381U;
unsigned int var_8 = 3028027503U;
unsigned int var_10 = 1324249127U;
int var_14 = 471038477;
unsigned int var_15 = 3309165452U;
int zero = 0;
short var_16 = (short)-19615;
int var_17 = -576888628;
int var_18 = 377583441;
short var_19 = (short)24258;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
