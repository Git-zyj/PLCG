#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3992828255U;
unsigned int var_2 = 455321107U;
signed char var_3 = (signed char)33;
short var_6 = (short)-17713;
_Bool var_8 = (_Bool)1;
int var_9 = 1187422924;
_Bool var_10 = (_Bool)1;
long long int var_13 = -8914263084016869662LL;
int var_14 = -660336961;
int zero = 0;
short var_16 = (short)-2853;
short var_17 = (short)18122;
short var_18 = (short)-5758;
int var_19 = -786667968;
_Bool var_20 = (_Bool)0;
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
