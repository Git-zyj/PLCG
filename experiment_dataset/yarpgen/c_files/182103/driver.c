#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8843654359677476318ULL;
short var_2 = (short)-23013;
_Bool var_5 = (_Bool)0;
unsigned long long int var_11 = 10645439634764764849ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = -1270260539;
unsigned short var_15 = (unsigned short)7550;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 624497288164011785ULL;
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
