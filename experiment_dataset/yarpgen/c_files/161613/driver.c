#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
short var_3 = (short)23045;
long long int var_8 = 4021070303348455551LL;
int zero = 0;
unsigned long long int var_14 = 13208156752938201537ULL;
unsigned char var_15 = (unsigned char)165;
unsigned char var_16 = (unsigned char)38;
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
