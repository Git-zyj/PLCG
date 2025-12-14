#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)8157;
signed char var_3 = (signed char)75;
unsigned int var_4 = 574028073U;
unsigned int var_5 = 2830841008U;
signed char var_7 = (signed char)36;
unsigned long long int var_8 = 7889705174469787674ULL;
unsigned char var_9 = (unsigned char)39;
int zero = 0;
unsigned long long int var_11 = 12391800782578815570ULL;
signed char var_12 = (signed char)24;
long long int var_13 = -3585425963367776963LL;
void init() {
}

void checksum() {
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
