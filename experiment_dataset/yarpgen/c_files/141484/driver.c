#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29434;
long long int var_1 = 7367649211825336111LL;
unsigned char var_2 = (unsigned char)41;
int var_3 = -1974498494;
long long int var_4 = 7678035219789562646LL;
unsigned int var_8 = 2958352166U;
unsigned long long int var_9 = 15259946339057491408ULL;
unsigned long long int var_10 = 16188834687440129680ULL;
unsigned char var_12 = (unsigned char)16;
unsigned long long int var_13 = 1913926490484230679ULL;
int zero = 0;
long long int var_15 = -8519027041124898931LL;
unsigned long long int var_16 = 12034436206810635793ULL;
long long int var_17 = -6456315955597099620LL;
short var_18 = (short)27912;
unsigned long long int var_19 = 9669426975217055249ULL;
long long int var_20 = -1640910855445585830LL;
unsigned char var_21 = (unsigned char)157;
int var_22 = 1220383846;
short var_23 = (short)-28443;
signed char var_24 = (signed char)50;
int var_25 = 615547615;
unsigned char var_26 = (unsigned char)143;
_Bool var_27 = (_Bool)1;
unsigned int var_28 = 3469088146U;
unsigned long long int var_29 = 3259044111736657532ULL;
unsigned char var_30 = (unsigned char)133;
unsigned int var_31 = 1777749911U;
unsigned long long int var_32 = 9356152092842629185ULL;
long long int arr_0 [10] ;
long long int arr_1 [10] ;
unsigned int arr_2 [10] ;
int arr_5 [10] [10] [10] ;
unsigned int arr_6 [10] [10] [10] [10] ;
long long int arr_11 [10] [10] ;
short arr_13 [10] [10] [10] [10] ;
unsigned int arr_16 [10] [10] [10] [10] ;
unsigned long long int arr_17 [10] [10] [10] [10] [10] ;
unsigned int arr_26 [10] [10] ;
unsigned int arr_8 [10] [10] [10] ;
unsigned char arr_20 [10] ;
unsigned int arr_23 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 3204808691169514766LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 150267768452496030LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1018428311U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1450106858;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 2635692692U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = -8590464423798577038LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (short)-28406;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 3135289271U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 6373863855457871408ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_26 [i_0] [i_1] = 3911287924U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 305423984U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2416410413U : 3267724398U;
}

void checksum() {
    hash(&seed, var_15);
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
