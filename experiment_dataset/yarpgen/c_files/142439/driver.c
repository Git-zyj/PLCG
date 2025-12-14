#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17682129268229393873ULL;
long long int var_3 = -5426831694462708175LL;
signed char var_6 = (signed char)52;
int var_7 = -386054482;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
short var_11 = (short)8;
long long int var_13 = -2302605574144258380LL;
unsigned long long int var_14 = 8072095555892096828ULL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-69;
int zero = 0;
signed char var_17 = (signed char)-44;
unsigned short var_18 = (unsigned short)41604;
signed char var_19 = (signed char)-87;
unsigned short var_20 = (unsigned short)3714;
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
