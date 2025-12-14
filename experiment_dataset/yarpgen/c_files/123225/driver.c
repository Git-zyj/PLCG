#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 15672010188040735472ULL;
long long int var_6 = 2407592856189054129LL;
signed char var_7 = (signed char)112;
unsigned char var_8 = (unsigned char)226;
int var_9 = -491505796;
signed char var_10 = (signed char)-55;
unsigned int var_11 = 3788632518U;
int zero = 0;
long long int var_12 = -7047922267698530383LL;
unsigned long long int var_13 = 6067947697488257075ULL;
unsigned long long int var_14 = 7744594131837495438ULL;
unsigned char var_15 = (unsigned char)108;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
