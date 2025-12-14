#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54654;
unsigned short var_4 = (unsigned short)13217;
long long int var_10 = 2389028745896460057LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_14 = (short)-15283;
unsigned short var_15 = (unsigned short)64435;
unsigned short var_16 = (unsigned short)37440;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
