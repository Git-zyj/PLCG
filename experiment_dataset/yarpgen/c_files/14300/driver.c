#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3977;
unsigned long long int var_3 = 1019135507178138546ULL;
unsigned char var_5 = (unsigned char)221;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)15;
unsigned int var_13 = 3566356292U;
int zero = 0;
int var_19 = -1249703016;
unsigned long long int var_20 = 5460656646967122149ULL;
short var_21 = (short)29320;
unsigned short var_22 = (unsigned short)58102;
unsigned long long int var_23 = 15033069268847783973ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
