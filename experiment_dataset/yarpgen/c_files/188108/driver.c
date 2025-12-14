#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_7 = (short)17439;
int var_8 = -1454508507;
int var_11 = -787453082;
int var_15 = 308722270;
short var_18 = (short)-12101;
int zero = 0;
int var_19 = 1048878615;
long long int var_20 = 1599353067889825398LL;
unsigned int var_21 = 1769334018U;
short var_22 = (short)-23473;
unsigned long long int var_23 = 13990444180026711223ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
