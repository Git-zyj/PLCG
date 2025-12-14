#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1167635841;
long long int var_4 = 1165476985377703529LL;
unsigned long long int var_5 = 7790774502128459610ULL;
unsigned int var_6 = 2891633726U;
unsigned short var_7 = (unsigned short)55739;
long long int var_8 = 1287664054589050924LL;
int var_9 = -231537044;
int var_10 = -509622925;
short var_11 = (short)20763;
short var_13 = (short)29846;
int zero = 0;
int var_14 = -580768345;
unsigned long long int var_15 = 8401559666446261533ULL;
long long int var_16 = 1916523152432750679LL;
short var_17 = (short)-17332;
_Bool arr_0 [13] ;
unsigned long long int arr_1 [13] ;
_Bool arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 17271138085613617512ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
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
