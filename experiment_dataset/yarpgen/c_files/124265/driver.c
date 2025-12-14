#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3367505168U;
unsigned long long int var_3 = 7014716640248692499ULL;
unsigned int var_6 = 1870695160U;
unsigned short var_7 = (unsigned short)46236;
short var_9 = (short)-30940;
_Bool var_10 = (_Bool)1;
long long int var_11 = -2432224669059452996LL;
long long int var_12 = -5063367268239037750LL;
signed char var_13 = (signed char)-8;
unsigned short var_15 = (unsigned short)46164;
int zero = 0;
signed char var_16 = (signed char)111;
unsigned long long int var_17 = 3837110946123797768ULL;
long long int var_18 = -3577458191784748391LL;
long long int var_19 = -5193736635875497996LL;
long long int var_20 = 1920478620991564624LL;
unsigned long long int var_21 = 18418104887556059133ULL;
unsigned long long int var_22 = 10291027718604657778ULL;
unsigned long long int var_23 = 8182024645276708758ULL;
signed char var_24 = (signed char)-25;
unsigned char var_25 = (unsigned char)60;
long long int var_26 = 4613590592173489100LL;
long long int var_27 = -6936271842217697361LL;
long long int arr_0 [19] ;
long long int arr_1 [19] ;
short arr_2 [19] ;
long long int arr_3 [19] [19] ;
unsigned int arr_5 [19] ;
unsigned short arr_6 [19] [19] [19] ;
long long int arr_8 [19] [19] [19] ;
unsigned char arr_10 [19] [19] ;
long long int arr_13 [19] [19] [19] ;
signed char arr_19 [19] [19] [19] ;
unsigned char arr_23 [23] ;
long long int arr_4 [19] [19] ;
long long int arr_12 [19] [19] [19] ;
signed char arr_17 [19] [19] ;
short arr_20 [19] [19] [19] ;
unsigned int arr_21 [19] [19] ;
unsigned long long int arr_25 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -4582308205834044180LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -9161047543488013309LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-3036 : (short)-3166;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -3016048294627375676LL : 6245821383348466293LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 1881976767U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)29963 : (unsigned short)10924;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -6764627813273974199LL : -4866423579549085198LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)27 : (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 8357118413807989743LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_23 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -5849368433679796928LL : 6506096148430459532LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -7805752919218749316LL : 7636014122107145342LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-61 : (signed char)-49;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)25420 : (short)-27575;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? 833553131U : 2242858227U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = 2433806021437467219ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
