#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2051094531;
long long int var_1 = 3107680828016164536LL;
unsigned long long int var_2 = 6308359874196687008ULL;
long long int var_4 = 570303634228240925LL;
short var_5 = (short)-3224;
short var_6 = (short)5465;
short var_7 = (short)14129;
unsigned long long int var_9 = 8217127026095351828ULL;
unsigned int var_11 = 1846256461U;
int zero = 0;
unsigned long long int var_12 = 10896008546306531827ULL;
long long int var_13 = 6710545399939673919LL;
unsigned int var_14 = 1802991672U;
unsigned int var_15 = 2657714149U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
