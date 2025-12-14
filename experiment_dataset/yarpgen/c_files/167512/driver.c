#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32561;
long long int var_2 = 4673548833678715938LL;
signed char var_3 = (signed char)-32;
long long int var_5 = 2473053852995329977LL;
_Bool var_6 = (_Bool)0;
long long int var_7 = 177428106123323009LL;
_Bool var_9 = (_Bool)1;
long long int var_10 = 6400012433192072831LL;
int zero = 0;
long long int var_13 = -6661214138069036960LL;
signed char var_14 = (signed char)76;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
