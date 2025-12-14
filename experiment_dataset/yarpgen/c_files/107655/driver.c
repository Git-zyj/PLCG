#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 143503269;
short var_1 = (short)-1709;
unsigned short var_5 = (unsigned short)3835;
unsigned long long int var_6 = 6272625724701662230ULL;
short var_8 = (short)20875;
int var_13 = 1020267840;
_Bool var_15 = (_Bool)1;
signed char var_17 = (signed char)-14;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 14082879067632709986ULL;
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
