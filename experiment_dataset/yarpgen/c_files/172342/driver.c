#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 11392145578639744445ULL;
unsigned long long int var_10 = 195817365766918173ULL;
int var_11 = 1306121557;
_Bool var_12 = (_Bool)1;
short var_15 = (short)-2710;
int zero = 0;
long long int var_20 = 1467353854611896241LL;
unsigned short var_21 = (unsigned short)21629;
int var_22 = 1154183923;
short var_23 = (short)-30668;
unsigned char var_24 = (unsigned char)189;
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
