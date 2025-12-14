#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1031434936;
unsigned long long int var_2 = 16039742456568993283ULL;
unsigned long long int var_3 = 13524746536524496703ULL;
unsigned short var_5 = (unsigned short)49237;
int var_6 = -91301436;
int var_7 = 1620420934;
int var_8 = 1587345494;
int var_10 = -420170656;
unsigned short var_11 = (unsigned short)26657;
int zero = 0;
unsigned short var_12 = (unsigned short)25714;
unsigned long long int var_13 = 9351306146244794349ULL;
long long int var_14 = -2635452729489490825LL;
int var_15 = 1557421146;
int var_16 = -1815052805;
unsigned long long int var_17 = 17232483564390748230ULL;
int var_18 = -1975975402;
unsigned short arr_0 [12] ;
long long int arr_2 [12] ;
int arr_4 [12] ;
unsigned short arr_3 [12] ;
unsigned short arr_7 [12] ;
unsigned long long int arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)20514;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 7811066691047581812LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = -1798362622;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)52728;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned short)1128;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 18362719504432904930ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
