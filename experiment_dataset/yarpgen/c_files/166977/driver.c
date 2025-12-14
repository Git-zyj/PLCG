#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -478930270;
int var_1 = -75492314;
unsigned int var_2 = 2140448159U;
long long int var_5 = 3530904573840734519LL;
unsigned int var_9 = 3801292618U;
unsigned char var_11 = (unsigned char)126;
unsigned int var_14 = 3811519638U;
int zero = 0;
unsigned long long int var_16 = 17146519738734815957ULL;
unsigned short var_17 = (unsigned short)28492;
unsigned int var_18 = 2410725612U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
