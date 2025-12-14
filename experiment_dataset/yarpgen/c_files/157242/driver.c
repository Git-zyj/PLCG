#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)82;
short var_5 = (short)18773;
int var_8 = -1092023205;
unsigned long long int var_10 = 5332904120090445782ULL;
unsigned long long int var_12 = 3808777643793112497ULL;
int zero = 0;
long long int var_14 = 5200779992118666865LL;
unsigned short var_15 = (unsigned short)12989;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
