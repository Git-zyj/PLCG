#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)70;
int var_1 = -1940214753;
signed char var_2 = (signed char)-15;
_Bool var_3 = (_Bool)0;
int var_4 = -512901400;
long long int var_5 = -2088135803877834803LL;
long long int var_6 = 253058496988006256LL;
unsigned long long int var_7 = 8850561960591999079ULL;
unsigned int var_8 = 1907078221U;
short var_11 = (short)-18334;
long long int var_12 = -2081717983329681097LL;
int zero = 0;
unsigned int var_13 = 3332850081U;
signed char var_14 = (signed char)-119;
long long int var_15 = 8007374606453419263LL;
short var_16 = (short)12468;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
