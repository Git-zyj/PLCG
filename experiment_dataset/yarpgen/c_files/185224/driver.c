#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7252001154759099432LL;
int var_1 = 2115464114;
unsigned char var_2 = (unsigned char)233;
_Bool var_4 = (_Bool)0;
short var_11 = (short)29919;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 2472222253958620373ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 11928895666621985219ULL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)49553;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
