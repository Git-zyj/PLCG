#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22889;
int var_1 = 1913222207;
unsigned long long int var_2 = 17296866995481290552ULL;
short var_3 = (short)-30064;
long long int var_4 = 7649812856544432248LL;
unsigned long long int var_6 = 18446457960197839637ULL;
int var_7 = 206097170;
unsigned long long int var_8 = 799502732257723622ULL;
long long int var_11 = 6592856587135750933LL;
long long int var_13 = 3847449912021449329LL;
int zero = 0;
signed char var_14 = (signed char)-94;
unsigned char var_15 = (unsigned char)249;
signed char var_16 = (signed char)56;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
