#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22615;
short var_1 = (short)23192;
long long int var_3 = 3300834783529217740LL;
int var_7 = -1584820445;
short var_10 = (short)2643;
short var_17 = (short)15472;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-639;
short var_21 = (short)-17792;
int var_22 = 1054100984;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
