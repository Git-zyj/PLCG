#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_3 = (signed char)31;
unsigned long long int var_6 = 11755154261690289643ULL;
signed char var_9 = (signed char)-30;
signed char var_11 = (signed char)33;
unsigned int var_12 = 824431544U;
short var_14 = (short)-18174;
int zero = 0;
unsigned char var_16 = (unsigned char)46;
long long int var_17 = -1125788195664784108LL;
short var_18 = (short)15978;
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
