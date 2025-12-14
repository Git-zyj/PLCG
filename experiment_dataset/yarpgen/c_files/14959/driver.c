#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7800203513319002318ULL;
unsigned long long int var_3 = 7129305292858808036ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 16190683615802320649ULL;
_Bool var_11 = (_Bool)0;
unsigned char var_16 = (unsigned char)177;
int var_17 = 1652519482;
int zero = 0;
long long int var_19 = -7702191374259682240LL;
unsigned char var_20 = (unsigned char)7;
unsigned long long int var_21 = 15458464241316604761ULL;
signed char var_22 = (signed char)51;
unsigned char var_23 = (unsigned char)203;
void init() {
}

void checksum() {
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
