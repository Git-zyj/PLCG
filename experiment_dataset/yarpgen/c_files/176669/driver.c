#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3383518176U;
unsigned long long int var_3 = 77412202748683026ULL;
unsigned char var_4 = (unsigned char)166;
short var_5 = (short)-5252;
unsigned long long int var_6 = 10141507173028081270ULL;
int var_7 = -109296845;
int var_9 = 1780057584;
unsigned int var_10 = 2380624900U;
short var_12 = (short)-32616;
unsigned char var_13 = (unsigned char)44;
unsigned int var_15 = 1458498299U;
signed char var_16 = (signed char)-114;
int zero = 0;
unsigned long long int var_17 = 7865072915797377178ULL;
int var_18 = -489098297;
unsigned long long int var_19 = 7100428710006346214ULL;
unsigned long long int var_20 = 16464235935381533255ULL;
unsigned int var_21 = 1139839441U;
short var_22 = (short)-28830;
unsigned long long int var_23 = 14900690754292987341ULL;
unsigned long long int var_24 = 5328699002515144051ULL;
unsigned long long int var_25 = 14842281277688201165ULL;
unsigned long long int var_26 = 17838190983240208762ULL;
unsigned long long int arr_3 [19] [19] ;
long long int arr_4 [19] ;
unsigned long long int arr_5 [19] ;
long long int arr_8 [19] ;
unsigned int arr_6 [19] [19] [19] ;
long long int arr_12 [12] ;
unsigned long long int arr_15 [12] ;
signed char arr_16 [12] ;
unsigned long long int arr_23 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 4593151715529745731ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 7449370948089551236LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 5928866511141261690ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = -5636082793789304803LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1242542426U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = -7724301707021524811LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 9471877708405998623ULL : 15637967167299764320ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (signed char)81 : (signed char)9;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 5226330813929728265ULL : 6125287267451753605ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
