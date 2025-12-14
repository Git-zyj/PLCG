#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 282295456U;
signed char var_2 = (signed char)104;
unsigned int var_3 = 1352317589U;
short var_4 = (short)-1467;
short var_5 = (short)11334;
signed char var_6 = (signed char)-115;
signed char var_7 = (signed char)-88;
int zero = 0;
unsigned short var_10 = (unsigned short)28153;
short var_11 = (short)12672;
long long int var_12 = -8465899912152867887LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
