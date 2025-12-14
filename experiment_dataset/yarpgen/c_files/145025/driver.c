#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)33;
signed char var_5 = (signed char)92;
_Bool var_6 = (_Bool)0;
long long int var_7 = 8296166563277091537LL;
int zero = 0;
unsigned short var_10 = (unsigned short)4985;
long long int var_11 = -8596235439356198868LL;
signed char var_12 = (signed char)40;
unsigned int var_13 = 2263068552U;
unsigned int var_14 = 2266544999U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
