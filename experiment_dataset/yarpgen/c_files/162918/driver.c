#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)81;
short var_3 = (short)9414;
long long int var_7 = 3537273149870363365LL;
short var_8 = (short)-26837;
unsigned long long int var_9 = 11422908175505289211ULL;
unsigned long long int var_10 = 1254967827995705110ULL;
_Bool var_11 = (_Bool)1;
long long int var_12 = 5082676525723253198LL;
short var_15 = (short)21309;
signed char var_16 = (signed char)-121;
unsigned long long int var_17 = 2750274770788545932ULL;
int zero = 0;
long long int var_18 = 2019271933807986786LL;
signed char var_19 = (signed char)42;
unsigned short var_20 = (unsigned short)42673;
signed char var_21 = (signed char)-64;
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
