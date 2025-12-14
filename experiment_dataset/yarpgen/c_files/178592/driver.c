#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1213184026732059578ULL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_5 = 7731584713165051234ULL;
long long int var_6 = 3501782012951746859LL;
unsigned long long int var_7 = 3390804453161153221ULL;
long long int var_8 = -3600006741724864180LL;
long long int var_10 = -2194195286458179919LL;
unsigned long long int var_13 = 15993639512583400335ULL;
short var_15 = (short)-9599;
int zero = 0;
unsigned long long int var_19 = 6085687371190118767ULL;
unsigned long long int var_20 = 12328563701895402684ULL;
long long int var_21 = -7655005449859812173LL;
signed char var_22 = (signed char)-25;
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
