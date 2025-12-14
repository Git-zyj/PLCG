#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 436946458;
long long int var_5 = 8787456458983841276LL;
unsigned int var_7 = 1980558551U;
signed char var_8 = (signed char)56;
unsigned long long int var_11 = 12085267463544152272ULL;
int zero = 0;
unsigned long long int var_12 = 11348207057404763969ULL;
short var_13 = (short)5127;
signed char var_14 = (signed char)-10;
unsigned long long int var_15 = 9947961228559413886ULL;
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
