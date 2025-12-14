#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)50;
unsigned char var_4 = (unsigned char)120;
unsigned short var_5 = (unsigned short)3874;
unsigned int var_7 = 3545003986U;
int zero = 0;
int var_12 = -883231242;
signed char var_13 = (signed char)24;
unsigned long long int var_14 = 12457627672635442919ULL;
_Bool var_15 = (_Bool)0;
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
