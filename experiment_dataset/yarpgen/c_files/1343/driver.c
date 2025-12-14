#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-17926;
long long int var_4 = 1879128661811890166LL;
unsigned char var_6 = (unsigned char)176;
unsigned int var_10 = 1912685752U;
int var_11 = -368299893;
unsigned char var_14 = (unsigned char)67;
unsigned int var_16 = 3490947338U;
unsigned char var_17 = (unsigned char)21;
int zero = 0;
unsigned long long int var_20 = 3952023691332642094ULL;
unsigned long long int var_21 = 13084593992139310058ULL;
signed char var_22 = (signed char)-62;
unsigned short var_23 = (unsigned short)12849;
short var_24 = (short)16501;
unsigned int var_25 = 3184039775U;
signed char var_26 = (signed char)66;
unsigned short var_27 = (unsigned short)31036;
unsigned long long int var_28 = 14095449695774774663ULL;
int var_29 = 1655428907;
long long int var_30 = -5443554255800336866LL;
signed char var_31 = (signed char)19;
_Bool arr_0 [19] ;
unsigned short arr_1 [19] ;
unsigned short arr_2 [19] [19] [19] ;
unsigned short arr_3 [19] [19] [19] ;
signed char arr_4 [19] [19] ;
unsigned long long int arr_5 [19] [19] [19] [19] ;
short arr_6 [19] [19] [19] [19] ;
signed char arr_7 [19] [19] [19] [19] ;
short arr_8 [19] [19] ;
unsigned char arr_9 [19] ;
long long int arr_12 [18] ;
unsigned int arr_13 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)28162;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)42515;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)61404 : (unsigned short)53435;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 8782340582630295530ULL : 10230930741762243638ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)-5203;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)5904 : (short)1578;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)228 : (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = 1736081899297173093LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = 3427374280U;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
