#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)160;
long long int var_4 = -9128866217215589295LL;
unsigned long long int var_5 = 16310749991381764351ULL;
unsigned long long int var_9 = 14103600670966798542ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)133;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)71;
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
