#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)-3332;
signed char var_3 = (signed char)87;
unsigned char var_5 = (unsigned char)118;
signed char var_7 = (signed char)-2;
long long int var_13 = 5767734458019595923LL;
signed char var_14 = (signed char)-117;
short var_16 = (short)17850;
int zero = 0;
signed char var_17 = (signed char)114;
long long int var_18 = 5332108189268599235LL;
unsigned long long int var_19 = 4817252493954011083ULL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
