#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6272765458414550927LL;
unsigned short var_2 = (unsigned short)39807;
signed char var_4 = (signed char)118;
unsigned int var_5 = 634270746U;
unsigned char var_6 = (unsigned char)143;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-30709;
_Bool var_14 = (_Bool)0;
int var_15 = 1686120934;
int zero = 0;
unsigned int var_17 = 279905164U;
unsigned short var_18 = (unsigned short)20574;
unsigned char var_19 = (unsigned char)192;
short var_20 = (short)6763;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
