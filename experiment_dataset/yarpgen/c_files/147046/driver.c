#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -194847179;
short var_6 = (short)28408;
_Bool var_7 = (_Bool)0;
int var_8 = 1161258925;
long long int var_9 = -6045569766320412225LL;
int var_12 = -166589679;
short var_13 = (short)-22108;
signed char var_15 = (signed char)76;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_20 = (short)-12383;
int var_21 = -630613902;
int var_22 = 500492439;
long long int var_23 = 6982737285230307361LL;
int var_24 = -305309880;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
