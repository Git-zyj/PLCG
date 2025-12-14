#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-85;
int var_2 = -1398203495;
long long int var_3 = -7322214952699866848LL;
unsigned int var_4 = 2275017563U;
unsigned int var_5 = 360433128U;
long long int var_6 = -4035884812092507211LL;
int var_7 = 1098972954;
signed char var_8 = (signed char)54;
int var_9 = 1686963129;
int var_10 = 1895063937;
unsigned int var_11 = 158583922U;
unsigned short var_12 = (unsigned short)1718;
unsigned int var_14 = 1728487385U;
unsigned int var_15 = 2218784101U;
int zero = 0;
long long int var_16 = 958211823786785781LL;
unsigned int var_17 = 3945147565U;
int var_18 = 574024072;
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
