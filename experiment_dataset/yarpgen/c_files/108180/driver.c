#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7630637703747990484LL;
unsigned int var_1 = 3294609344U;
unsigned long long int var_2 = 11497817533535796764ULL;
short var_5 = (short)-5345;
_Bool var_7 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 18147472492313846156ULL;
short var_20 = (short)2228;
unsigned int var_21 = 3026369894U;
short var_22 = (short)-14196;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
