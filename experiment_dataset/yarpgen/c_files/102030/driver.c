#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)245;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 5752427728121671339ULL;
unsigned long long int var_5 = 14026782711909140483ULL;
long long int var_6 = 8502002234064314941LL;
unsigned long long int var_8 = 11318360341223467305ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = -5608401583388074608LL;
signed char var_11 = (signed char)-87;
signed char var_12 = (signed char)23;
unsigned long long int var_13 = 6908870965301371295ULL;
unsigned long long int var_14 = 3421725194931390441ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
