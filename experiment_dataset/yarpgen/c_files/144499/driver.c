#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13654;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 10351889638899149969ULL;
short var_8 = (short)-17530;
signed char var_9 = (signed char)-26;
int zero = 0;
long long int var_11 = 1097133931422817341LL;
unsigned short var_12 = (unsigned short)29809;
_Bool var_13 = (_Bool)0;
long long int var_14 = -8603392852369262590LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
