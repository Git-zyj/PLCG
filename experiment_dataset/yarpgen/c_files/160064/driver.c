#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31472;
unsigned long long int var_3 = 8562806698970758962ULL;
unsigned int var_4 = 3757652237U;
_Bool var_5 = (_Bool)0;
int var_7 = 781707945;
unsigned long long int var_8 = 6992289841202743595ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)50;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
