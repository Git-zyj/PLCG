#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11711476715801112694ULL;
long long int var_2 = -876945834771400153LL;
unsigned int var_7 = 1562073302U;
unsigned long long int var_9 = 7974854601056710205ULL;
unsigned short var_10 = (unsigned short)18220;
short var_11 = (short)19127;
_Bool var_12 = (_Bool)1;
short var_14 = (short)30510;
int zero = 0;
unsigned char var_15 = (unsigned char)115;
int var_16 = 610515634;
void init() {
}

void checksum() {
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
