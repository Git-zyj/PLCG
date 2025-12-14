#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37267;
unsigned long long int var_2 = 6411085342871611438ULL;
int var_3 = 1996758436;
unsigned long long int var_4 = 9430520007759340808ULL;
unsigned long long int var_5 = 4692543680860771669ULL;
int var_6 = 820322280;
_Bool var_7 = (_Bool)1;
short var_8 = (short)15228;
int zero = 0;
unsigned short var_10 = (unsigned short)42129;
short var_11 = (short)-32738;
unsigned short var_12 = (unsigned short)56430;
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
