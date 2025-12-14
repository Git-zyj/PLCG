#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 515070977U;
signed char var_1 = (signed char)60;
long long int var_7 = 6242250770739400050LL;
signed char var_8 = (signed char)-124;
short var_13 = (short)-26175;
int var_16 = 994451615;
int zero = 0;
short var_17 = (short)26920;
signed char var_18 = (signed char)-12;
signed char var_19 = (signed char)87;
long long int var_20 = 2701944041055369331LL;
long long int var_21 = 1383143322702715639LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
