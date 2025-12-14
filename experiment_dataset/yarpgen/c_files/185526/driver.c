#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8036882719798183852ULL;
unsigned short var_3 = (unsigned short)28343;
unsigned long long int var_4 = 17231151288981458882ULL;
unsigned short var_5 = (unsigned short)38936;
long long int var_7 = -61334665179710093LL;
signed char var_8 = (signed char)28;
short var_9 = (short)-11588;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)51;
short var_18 = (short)1434;
long long int var_19 = -524812146420958468LL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
