#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59922;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 827871238U;
unsigned long long int var_5 = 16777189097193330906ULL;
int var_9 = -1018706220;
int zero = 0;
unsigned int var_10 = 2710543319U;
unsigned char var_11 = (unsigned char)161;
long long int var_12 = 8172784194402495960LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
