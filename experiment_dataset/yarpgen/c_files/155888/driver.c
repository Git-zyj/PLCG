#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -624054971;
signed char var_3 = (signed char)-70;
unsigned long long int var_5 = 14312607400082391443ULL;
int var_6 = -164893088;
short var_7 = (short)-12751;
signed char var_11 = (signed char)43;
int zero = 0;
short var_12 = (short)-24345;
_Bool var_13 = (_Bool)1;
long long int var_14 = -1836009690171358466LL;
signed char var_15 = (signed char)48;
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
