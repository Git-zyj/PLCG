#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26178;
_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 4885055503131240432ULL;
unsigned short var_10 = (unsigned short)45291;
unsigned int var_11 = 634777090U;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)46960;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2143106163U;
unsigned short var_18 = (unsigned short)30661;
unsigned long long int var_19 = 15358847106177328811ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
