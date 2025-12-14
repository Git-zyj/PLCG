#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6941305400907354403ULL;
unsigned long long int var_3 = 4849440275302566123ULL;
signed char var_7 = (signed char)4;
signed char var_8 = (signed char)13;
unsigned long long int var_10 = 16567107177733550913ULL;
int zero = 0;
short var_11 = (short)20230;
long long int var_12 = 4948926408606315622LL;
unsigned long long int var_13 = 15053847918317785165ULL;
short var_14 = (short)-8730;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
