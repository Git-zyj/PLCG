#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5189971901113320959LL;
unsigned short var_5 = (unsigned short)2008;
unsigned long long int var_8 = 12922466978128883253ULL;
unsigned short var_9 = (unsigned short)12307;
unsigned long long int var_12 = 12829038271128023153ULL;
long long int var_13 = 1190792946961103778LL;
short var_14 = (short)5959;
int zero = 0;
unsigned short var_15 = (unsigned short)19363;
signed char var_16 = (signed char)-89;
unsigned short var_17 = (unsigned short)3384;
short var_18 = (short)1184;
short var_19 = (short)27640;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
