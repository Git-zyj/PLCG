#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26061;
signed char var_5 = (signed char)-55;
short var_8 = (short)-31897;
long long int var_10 = 2670336872696389019LL;
long long int var_11 = 3965775991704044391LL;
long long int var_12 = 1810438103715953390LL;
unsigned long long int var_13 = 17338755747287274776ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)62268;
unsigned long long int var_17 = 289349928385163039ULL;
short var_18 = (short)3141;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
