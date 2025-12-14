#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 10412922581697512793ULL;
signed char var_4 = (signed char)15;
unsigned char var_8 = (unsigned char)142;
long long int var_9 = 3020129467860351703LL;
short var_13 = (short)10919;
_Bool var_15 = (_Bool)1;
int var_16 = -362664149;
int zero = 0;
signed char var_18 = (signed char)-26;
signed char var_19 = (signed char)93;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
