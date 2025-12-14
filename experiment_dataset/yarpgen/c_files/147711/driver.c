#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = 1711498825;
long long int var_5 = -982946740351796913LL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 5485096866807716369ULL;
unsigned long long int var_11 = 1927727969631553081ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = -654487666;
unsigned char var_14 = (unsigned char)129;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)25337;
unsigned int var_17 = 2025912658U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
