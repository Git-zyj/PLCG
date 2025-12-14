#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)(-127 - 1);
signed char var_3 = (signed char)85;
unsigned int var_4 = 3850666890U;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1671225459U;
unsigned short var_8 = (unsigned short)45503;
int var_12 = -1039242750;
int zero = 0;
signed char var_14 = (signed char)(-127 - 1);
unsigned long long int var_15 = 2110989721552239086ULL;
signed char var_16 = (signed char)-74;
unsigned long long int var_17 = 14463853765988535169ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
