#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8239010400765664367LL;
long long int var_1 = -3184783892973376899LL;
unsigned short var_2 = (unsigned short)48601;
unsigned char var_3 = (unsigned char)224;
unsigned char var_4 = (unsigned char)175;
unsigned long long int var_5 = 12850255475756952613ULL;
long long int var_10 = 2441814395075858620LL;
unsigned char var_11 = (unsigned char)84;
int zero = 0;
int var_12 = 1660343946;
unsigned long long int var_13 = 16571508714580558175ULL;
int var_14 = -1671571175;
signed char var_15 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
