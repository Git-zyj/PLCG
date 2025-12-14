#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1585240250;
short var_12 = (short)15461;
int var_15 = 483374389;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_17 = (short)1142;
unsigned short var_18 = (unsigned short)15130;
unsigned short var_19 = (unsigned short)56664;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
