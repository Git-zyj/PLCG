#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4047247335149373860ULL;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-25053;
unsigned int var_7 = 1158847862U;
unsigned char var_8 = (unsigned char)94;
long long int var_9 = 7917661059635904942LL;
short var_10 = (short)5191;
unsigned short var_14 = (unsigned short)24042;
unsigned short var_15 = (unsigned short)9720;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_18 = (short)8687;
unsigned char var_19 = (unsigned char)195;
signed char var_20 = (signed char)40;
void init() {
}

void checksum() {
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
