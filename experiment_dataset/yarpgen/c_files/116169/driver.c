#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12797;
long long int var_2 = 3120759638749396090LL;
signed char var_4 = (signed char)-109;
unsigned long long int var_5 = 2044457314693117123ULL;
int var_9 = 1585666189;
long long int var_11 = -5446232352676849492LL;
int zero = 0;
short var_12 = (short)23953;
long long int var_13 = 585162016007628164LL;
signed char var_14 = (signed char)125;
unsigned short var_15 = (unsigned short)57020;
unsigned int var_16 = 1948809266U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
