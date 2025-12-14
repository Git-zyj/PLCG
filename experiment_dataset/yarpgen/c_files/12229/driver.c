#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1483686339395028872LL;
int var_3 = -1931584634;
unsigned char var_6 = (unsigned char)17;
short var_9 = (short)-19419;
signed char var_10 = (signed char)98;
unsigned long long int var_11 = 3431549983001003807ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)8850;
long long int var_14 = 5467097328492893456LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
