#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58224;
int var_1 = -1012600868;
unsigned short var_2 = (unsigned short)15919;
short var_5 = (short)12279;
signed char var_7 = (signed char)113;
unsigned int var_10 = 4140890171U;
int zero = 0;
unsigned long long int var_11 = 6644074636949420832ULL;
unsigned short var_12 = (unsigned short)60171;
long long int var_13 = -3458042282557249703LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
