#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -842827278;
signed char var_5 = (signed char)28;
unsigned short var_9 = (unsigned short)12466;
_Bool var_15 = (_Bool)1;
short var_16 = (short)23449;
signed char var_17 = (signed char)-117;
int zero = 0;
long long int var_18 = -6435754162565934295LL;
unsigned long long int var_19 = 2596013000128437498ULL;
unsigned char var_20 = (unsigned char)56;
void init() {
}

void checksum() {
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
