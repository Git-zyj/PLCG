#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 325007516356596006ULL;
unsigned short var_3 = (unsigned short)29342;
long long int var_7 = -8018115579685109466LL;
unsigned long long int var_10 = 14711487478219929744ULL;
long long int var_14 = -6073932778853741150LL;
int zero = 0;
unsigned long long int var_15 = 6680084986769910651ULL;
_Bool var_16 = (_Bool)1;
long long int var_17 = 7156747771235924611LL;
unsigned short var_18 = (unsigned short)11480;
long long int var_19 = 7403286856439367291LL;
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
