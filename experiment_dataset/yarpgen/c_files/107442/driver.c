#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2255777995U;
unsigned int var_8 = 3436423594U;
unsigned long long int var_9 = 491813397933172000ULL;
_Bool var_10 = (_Bool)1;
int var_12 = 1565728575;
int zero = 0;
long long int var_13 = -832529912458047378LL;
unsigned int var_14 = 248238979U;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 10460928592556366389ULL;
unsigned long long int var_17 = 12442893524498370976ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
