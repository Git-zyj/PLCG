#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24484;
short var_2 = (short)17116;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 4780187804718346351ULL;
unsigned long long int var_9 = 523578937667838908ULL;
short var_10 = (short)15285;
unsigned long long int var_11 = 6817387130739394795ULL;
unsigned long long int var_14 = 813130903384075341ULL;
unsigned long long int var_15 = 13108443435148973808ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 11997403909425934877ULL;
unsigned long long int var_19 = 6436366018638267385ULL;
_Bool var_20 = (_Bool)0;
short var_21 = (short)26081;
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
