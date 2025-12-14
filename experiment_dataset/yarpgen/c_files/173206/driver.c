#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-113;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
int var_5 = 990014149;
short var_8 = (short)25799;
unsigned int var_10 = 1587111373U;
signed char var_12 = (signed char)24;
short var_13 = (short)24467;
unsigned long long int var_16 = 8258624016922206518ULL;
int var_18 = 1918884105;
int zero = 0;
unsigned short var_19 = (unsigned short)29609;
long long int var_20 = -6164901094208369871LL;
long long int var_21 = 5610308529357558231LL;
signed char var_22 = (signed char)-123;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
