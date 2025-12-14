#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4003268704U;
unsigned long long int var_2 = 16689272491823624525ULL;
unsigned int var_5 = 926622352U;
long long int var_7 = -7171733308048756512LL;
long long int var_10 = -1447123205564518326LL;
signed char var_12 = (signed char)-40;
long long int var_17 = 8259965352980269039LL;
unsigned int var_19 = 370762047U;
int zero = 0;
unsigned long long int var_20 = 16804292714746253923ULL;
short var_21 = (short)27050;
long long int var_22 = -5173020515922880696LL;
signed char var_23 = (signed char)18;
unsigned int var_24 = 3707778960U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
