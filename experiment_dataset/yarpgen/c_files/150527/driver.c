#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1867738884;
unsigned long long int var_1 = 6151130352579990975ULL;
long long int var_2 = -1940793419754725540LL;
unsigned int var_4 = 3250496594U;
long long int var_5 = 5167504243144635867LL;
unsigned short var_6 = (unsigned short)33784;
unsigned short var_7 = (unsigned short)63225;
unsigned short var_8 = (unsigned short)9305;
_Bool var_9 = (_Bool)0;
short var_11 = (short)24834;
int var_12 = 2138786978;
unsigned long long int var_13 = 14276317422333081698ULL;
int var_14 = 1223518016;
unsigned int var_15 = 3621248555U;
long long int var_16 = 3543323349818891481LL;
int var_17 = 399190983;
int zero = 0;
short var_18 = (short)-5837;
unsigned long long int var_19 = 12732987322832250483ULL;
short var_20 = (short)6543;
int var_21 = 1615420072;
unsigned int var_22 = 4250233956U;
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
