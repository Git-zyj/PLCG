#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)209;
int var_10 = 1254495945;
short var_13 = (short)-22054;
long long int var_16 = -745444682134265473LL;
long long int var_18 = -2627393927163525834LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-52;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
