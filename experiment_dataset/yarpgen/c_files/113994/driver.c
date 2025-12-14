#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24520;
signed char var_1 = (signed char)31;
int var_2 = -1162719260;
unsigned short var_3 = (unsigned short)53157;
long long int var_4 = 420130247121591039LL;
short var_6 = (short)28296;
long long int var_8 = 9002051893541532058LL;
unsigned long long int var_9 = 2957137116636918818ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)28848;
long long int var_11 = 8027839542863919090LL;
unsigned long long int var_12 = 6918760427722572356ULL;
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
