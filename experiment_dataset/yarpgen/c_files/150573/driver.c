#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5113;
int var_1 = -680402249;
short var_4 = (short)-6020;
unsigned int var_9 = 1352894810U;
signed char var_10 = (signed char)-78;
unsigned short var_13 = (unsigned short)48001;
unsigned int var_14 = 1750474504U;
int var_15 = -593249625;
int zero = 0;
long long int var_16 = 6741739544430807479LL;
signed char var_17 = (signed char)-71;
int var_18 = 19927525;
short var_19 = (short)20713;
signed char var_20 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
