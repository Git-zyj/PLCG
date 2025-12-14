#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 677307331U;
short var_9 = (short)-18980;
unsigned int var_10 = 2042193603U;
unsigned int var_14 = 14885218U;
short var_15 = (short)-17899;
unsigned long long int var_16 = 5781592336968198960ULL;
long long int var_19 = -3607545033675082108LL;
int zero = 0;
int var_20 = -1514462783;
long long int var_21 = -697951011032377199LL;
unsigned short var_22 = (unsigned short)7373;
int var_23 = 1416629212;
unsigned int var_24 = 2233304004U;
short var_25 = (short)17251;
unsigned long long int arr_0 [12] ;
unsigned int arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1549218209217558703ULL : 2101776353061240450ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 900920109U : 1640883843U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
