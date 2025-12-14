#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 250496851U;
unsigned char var_4 = (unsigned char)16;
long long int var_5 = -7715079545363483216LL;
_Bool var_9 = (_Bool)1;
signed char var_16 = (signed char)7;
int zero = 0;
unsigned long long int var_17 = 14963142988496568533ULL;
short var_18 = (short)14784;
void init() {
}

void checksum() {
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
