#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)78;
signed char var_6 = (signed char)-52;
unsigned int var_13 = 760875881U;
short var_14 = (short)-9203;
long long int var_16 = 7314922200337656863LL;
int var_17 = -526716036;
int zero = 0;
signed char var_18 = (signed char)122;
int var_19 = -54325143;
short var_20 = (short)-22963;
unsigned long long int var_21 = 807865062308215050ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
