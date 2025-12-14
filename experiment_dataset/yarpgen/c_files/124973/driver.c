#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33950;
int var_3 = -1785394641;
int var_7 = 1315601762;
signed char var_9 = (signed char)83;
unsigned int var_10 = 2885582454U;
unsigned long long int var_11 = 11237252697707355270ULL;
unsigned int var_15 = 51832535U;
unsigned short var_18 = (unsigned short)1045;
int zero = 0;
unsigned long long int var_20 = 3437253163224135339ULL;
unsigned short var_21 = (unsigned short)18518;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
