#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10162;
signed char var_3 = (signed char)-116;
_Bool var_4 = (_Bool)0;
unsigned int var_7 = 1909161666U;
unsigned short var_9 = (unsigned short)6973;
int zero = 0;
unsigned long long int var_13 = 10755234060754221955ULL;
unsigned long long int var_14 = 18253536304582106879ULL;
void init() {
}

void checksum() {
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
