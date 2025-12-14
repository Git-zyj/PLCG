#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)10820;
int var_2 = -1930832207;
unsigned short var_5 = (unsigned short)36630;
short var_6 = (short)21992;
unsigned char var_7 = (unsigned char)223;
int zero = 0;
unsigned long long int var_10 = 17229251492210396881ULL;
int var_11 = -1437916830;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)11032;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
