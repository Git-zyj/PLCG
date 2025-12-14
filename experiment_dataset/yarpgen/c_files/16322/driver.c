#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 537421529U;
unsigned long long int var_2 = 2247821546989630668ULL;
unsigned char var_3 = (unsigned char)82;
unsigned short var_6 = (unsigned short)56790;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 1489029469363960768ULL;
unsigned char var_17 = (unsigned char)144;
long long int var_18 = -411503497814538964LL;
int zero = 0;
int var_19 = 63619390;
unsigned long long int var_20 = 9382667044423996167ULL;
int var_21 = 29866913;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 1351171438U;
int arr_0 [19] ;
unsigned long long int arr_1 [19] ;
int arr_4 [19] ;
unsigned int arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 5751777 : 447209596;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 12692208924262981463ULL : 7005030506788339558ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 224968383 : 1591887473;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 3770313900U : 2779467881U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
