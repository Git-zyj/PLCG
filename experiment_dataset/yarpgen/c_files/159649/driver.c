#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-26092;
short var_5 = (short)-14243;
short var_8 = (short)639;
unsigned char var_10 = (unsigned char)15;
unsigned long long int var_18 = 5339455709400074906ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)17646;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
