#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 15307988879928552205ULL;
long long int var_4 = 1456514903035380090LL;
unsigned int var_5 = 2318460792U;
long long int var_6 = 1584100320719931641LL;
signed char var_8 = (signed char)-67;
unsigned int var_10 = 937473231U;
short var_11 = (short)-23179;
long long int var_12 = 2924961906155003449LL;
int zero = 0;
short var_14 = (short)-16045;
unsigned long long int var_15 = 10255326986087158342ULL;
int var_16 = -1937385484;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
