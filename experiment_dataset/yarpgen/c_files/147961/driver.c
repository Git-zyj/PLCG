#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-32;
long long int var_1 = -3672956467125772169LL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 2728708538463442008ULL;
unsigned int var_5 = 2637399732U;
unsigned long long int var_6 = 1349628572033715085ULL;
unsigned short var_7 = (unsigned short)22813;
unsigned int var_8 = 4234244200U;
unsigned short var_9 = (unsigned short)63627;
unsigned long long int var_11 = 1601835595678583057ULL;
unsigned long long int var_12 = 2172861179606163203ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)48038;
unsigned short var_15 = (unsigned short)12224;
_Bool var_16 = (_Bool)0;
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
