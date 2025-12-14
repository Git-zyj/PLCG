#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)46;
unsigned short var_2 = (unsigned short)35446;
unsigned short var_6 = (unsigned short)34284;
int var_7 = -1836993811;
int zero = 0;
short var_20 = (short)-14424;
int var_21 = 814895967;
unsigned int var_22 = 466991868U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
