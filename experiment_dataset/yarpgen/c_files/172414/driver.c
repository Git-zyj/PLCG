#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_4 = -1777215309;
int var_5 = -1525502961;
int var_7 = 1112884018;
unsigned int var_11 = 962182753U;
unsigned long long int var_13 = 6731699185790414837ULL;
int var_15 = 1296667455;
int var_17 = -634467279;
int zero = 0;
long long int var_18 = -4640087733541151572LL;
short var_19 = (short)1036;
void init() {
}

void checksum() {
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
