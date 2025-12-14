#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11431096836381455383ULL;
unsigned long long int var_3 = 18414713198884203926ULL;
long long int var_5 = 8214715380017262671LL;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)95;
signed char var_10 = (signed char)34;
long long int var_12 = -7899473500440432919LL;
int zero = 0;
short var_14 = (short)12938;
signed char var_15 = (signed char)52;
int var_16 = 287752546;
int var_17 = -973518521;
short var_18 = (short)-32245;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
