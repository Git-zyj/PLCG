#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)228;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)59227;
_Bool var_9 = (_Bool)1;
long long int var_10 = 4632014848047317474LL;
unsigned char var_11 = (unsigned char)107;
_Bool var_12 = (_Bool)1;
unsigned char var_16 = (unsigned char)188;
short var_17 = (short)21984;
int zero = 0;
int var_18 = -317190921;
unsigned int var_19 = 2590698771U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
