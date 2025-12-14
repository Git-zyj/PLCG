#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4541924699578293882ULL;
unsigned long long int var_2 = 14682672343641023327ULL;
unsigned int var_4 = 3190801598U;
unsigned int var_6 = 3150176519U;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 843605841792156376ULL;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 224332827U;
unsigned long long int var_12 = 17047587583183633177ULL;
unsigned long long int var_13 = 17780403052456763726ULL;
unsigned int var_14 = 2954292909U;
int zero = 0;
int var_15 = -330805686;
unsigned long long int var_16 = 3027561491135866523ULL;
unsigned long long int var_17 = 10108516513743803134ULL;
signed char var_18 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
