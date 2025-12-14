#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 412112001787206159LL;
short var_12 = (short)-7409;
signed char var_13 = (signed char)-101;
unsigned long long int var_14 = 14059186592976683922ULL;
unsigned long long int var_15 = 3848559817546087132ULL;
int var_17 = -2142020758;
int zero = 0;
short var_20 = (short)-30265;
short var_21 = (short)26310;
int var_22 = 454422340;
unsigned long long int var_23 = 1477869666274286177ULL;
void init() {
}

void checksum() {
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
