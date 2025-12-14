#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_3 = -12741743;
unsigned char var_4 = (unsigned char)46;
short var_5 = (short)-24428;
signed char var_7 = (signed char)101;
unsigned int var_12 = 3886956543U;
short var_13 = (short)-19132;
long long int var_14 = 4996500787986400693LL;
int zero = 0;
short var_15 = (short)12205;
long long int var_16 = 7213517544449572614LL;
long long int var_17 = 2165480851692441274LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
