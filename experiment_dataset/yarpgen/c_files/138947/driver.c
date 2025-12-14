#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)8452;
unsigned long long int var_5 = 2994818489530715404ULL;
unsigned long long int var_6 = 18282622102384583524ULL;
int var_7 = 1988621704;
short var_8 = (short)17445;
short var_11 = (short)15213;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)14883;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
