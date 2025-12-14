#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1143497960;
int var_1 = 723847973;
unsigned char var_2 = (unsigned char)118;
int var_3 = 2110750696;
unsigned long long int var_5 = 1388234661199785076ULL;
long long int var_6 = -4344705263085177884LL;
unsigned long long int var_7 = 10491609571535325914ULL;
long long int var_8 = 8557916768068008244LL;
unsigned char var_10 = (unsigned char)185;
unsigned char var_12 = (unsigned char)197;
short var_13 = (short)-30701;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3173519902U;
int zero = 0;
unsigned long long int var_18 = 17763168318901696677ULL;
int var_19 = 1145320985;
_Bool var_20 = (_Bool)1;
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
