#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 910812657U;
short var_1 = (short)9499;
unsigned int var_5 = 12422771U;
short var_6 = (short)-9764;
short var_8 = (short)17259;
unsigned int var_9 = 380714142U;
short var_10 = (short)13041;
int zero = 0;
short var_11 = (short)-17576;
short var_12 = (short)2547;
unsigned int var_13 = 1693205632U;
unsigned int var_14 = 307550758U;
short var_15 = (short)32584;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
