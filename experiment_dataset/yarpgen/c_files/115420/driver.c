#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1319934224;
unsigned char var_2 = (unsigned char)183;
signed char var_3 = (signed char)-125;
long long int var_5 = -8204515837289525008LL;
unsigned short var_11 = (unsigned short)64020;
short var_12 = (short)-23200;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)38;
long long int var_19 = -1054666172526706091LL;
int var_20 = 1318914676;
unsigned char var_21 = (unsigned char)77;
void init() {
}

void checksum() {
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
