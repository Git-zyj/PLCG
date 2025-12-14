#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 170919956U;
short var_4 = (short)-8113;
signed char var_5 = (signed char)-5;
signed char var_6 = (signed char)40;
long long int var_9 = 3553983210729959161LL;
long long int var_12 = 1016259126860344017LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-17313;
unsigned int var_16 = 817485813U;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
