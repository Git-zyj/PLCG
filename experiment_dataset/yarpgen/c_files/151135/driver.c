#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4294285621785366345LL;
signed char var_3 = (signed char)99;
short var_4 = (short)13843;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)32090;
int var_8 = 2087361907;
int zero = 0;
short var_10 = (short)-1179;
signed char var_11 = (signed char)-23;
short var_12 = (short)-22786;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
