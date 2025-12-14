#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8695376014509816934ULL;
unsigned long long int var_1 = 13226787934727434095ULL;
unsigned int var_2 = 2555178340U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 7009200372759899414ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)191;
unsigned char var_9 = (unsigned char)242;
int zero = 0;
long long int var_10 = -3397151429270242544LL;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 15630667786661476935ULL;
long long int var_14 = -488171689675165201LL;
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
