#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -1731593167;
signed char var_4 = (signed char)-32;
int var_7 = -457834769;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 1101249147U;
int var_13 = -1395021386;
int zero = 0;
unsigned short var_16 = (unsigned short)50060;
signed char var_17 = (signed char)-13;
unsigned char var_18 = (unsigned char)209;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
