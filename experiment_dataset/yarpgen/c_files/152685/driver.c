#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)15201;
short var_10 = (short)30221;
long long int var_12 = -4112189289664549306LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1251583705U;
signed char var_17 = (signed char)-125;
unsigned long long int var_18 = 1466026487592313030ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
