#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1610466887;
unsigned short var_1 = (unsigned short)32140;
int var_2 = 2042021819;
_Bool var_3 = (_Bool)0;
int var_4 = 1854677156;
long long int var_5 = 9055188582107512676LL;
unsigned int var_7 = 172586001U;
signed char var_9 = (signed char)-125;
unsigned int var_12 = 580327998U;
unsigned long long int var_14 = 13603103097722829201ULL;
int zero = 0;
int var_15 = 1145215978;
unsigned int var_16 = 1314628540U;
unsigned short var_17 = (unsigned short)6099;
unsigned short var_18 = (unsigned short)53567;
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
