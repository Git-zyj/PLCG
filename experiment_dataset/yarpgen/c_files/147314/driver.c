#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11954903396609043708ULL;
unsigned long long int var_3 = 14024421080035076819ULL;
unsigned int var_4 = 3609241528U;
short var_5 = (short)197;
short var_6 = (short)-13749;
unsigned long long int var_10 = 15517859863566259713ULL;
short var_11 = (short)-22309;
short var_12 = (short)-24515;
short var_13 = (short)-12445;
unsigned int var_14 = 2358170326U;
unsigned long long int var_16 = 10191366087611288799ULL;
long long int var_19 = 9050805987593046861LL;
int zero = 0;
long long int var_20 = -2251723175596658458LL;
short var_21 = (short)-30632;
unsigned int var_22 = 1345008489U;
unsigned short var_23 = (unsigned short)15177;
short var_24 = (short)-30412;
long long int var_25 = -9057897963706612691LL;
int var_26 = -1665011599;
unsigned char var_27 = (unsigned char)177;
short arr_0 [25] ;
unsigned long long int arr_1 [25] [25] ;
unsigned long long int arr_3 [18] ;
long long int arr_4 [18] [18] ;
short arr_5 [18] ;
short arr_9 [18] [18] ;
long long int arr_10 [18] [18] [18] ;
short arr_2 [25] ;
short arr_11 [18] [18] ;
unsigned int arr_12 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)12505;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 17901480062395425443ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 16967904837462259129ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = -3217782785652861187LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (short)28229;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-3823 : (short)-7551;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -3817569046985703881LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)11027;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-6053 : (short)28050;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3222300U : 3797829610U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
