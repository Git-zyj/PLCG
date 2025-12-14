#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)6897;
int var_3 = -1992008884;
long long int var_4 = 7710396048872272122LL;
unsigned short var_5 = (unsigned short)43117;
long long int var_8 = 1850163101633138402LL;
long long int var_9 = -7670569281102304020LL;
unsigned char var_12 = (unsigned char)198;
signed char var_13 = (signed char)-108;
unsigned int var_14 = 2852304317U;
int zero = 0;
unsigned short var_16 = (unsigned short)6276;
signed char var_17 = (signed char)-71;
long long int var_18 = -1801640365623215714LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
