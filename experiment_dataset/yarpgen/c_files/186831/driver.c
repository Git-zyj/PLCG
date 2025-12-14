#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_5 = (signed char)124;
unsigned long long int var_11 = 13234806362189822184ULL;
signed char var_14 = (signed char)-91;
int var_15 = -1151284285;
unsigned long long int var_16 = 8593317113533457245ULL;
int zero = 0;
unsigned long long int var_18 = 12794760098288366653ULL;
signed char var_19 = (signed char)-12;
short var_20 = (short)17155;
short var_21 = (short)31059;
short var_22 = (short)-5293;
long long int var_23 = 3705683818839251008LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
