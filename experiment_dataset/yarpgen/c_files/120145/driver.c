#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -7073530;
signed char var_2 = (signed char)61;
long long int var_5 = -8376354033656216399LL;
unsigned long long int var_6 = 7281536062893464714ULL;
_Bool var_7 = (_Bool)0;
int var_8 = 302423688;
unsigned char var_9 = (unsigned char)59;
signed char var_10 = (signed char)69;
int zero = 0;
long long int var_11 = 7336170892199445735LL;
long long int var_12 = -8914225739498594093LL;
short var_13 = (short)3428;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
