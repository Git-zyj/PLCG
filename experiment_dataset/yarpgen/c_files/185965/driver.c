#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 955179005091750178ULL;
unsigned int var_3 = 1770634280U;
unsigned long long int var_4 = 673780538592775394ULL;
unsigned int var_5 = 3743650944U;
unsigned short var_7 = (unsigned short)45368;
long long int var_8 = 2282288078744949154LL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_16 = 16685821072580257136ULL;
int zero = 0;
unsigned int var_19 = 413150588U;
int var_20 = -886315603;
unsigned long long int var_21 = 14944648159505225714ULL;
signed char var_22 = (signed char)-66;
unsigned short var_23 = (unsigned short)688;
long long int var_24 = 293777362721824872LL;
unsigned long long int var_25 = 9818550529118680699ULL;
unsigned int var_26 = 2836182482U;
int var_27 = -1310500317;
unsigned long long int var_28 = 17075765061688723470ULL;
unsigned char var_29 = (unsigned char)211;
signed char var_30 = (signed char)-58;
unsigned long long int arr_0 [20] ;
unsigned long long int arr_1 [20] [20] ;
unsigned int arr_2 [20] ;
int arr_5 [12] ;
signed char arr_7 [12] ;
_Bool arr_8 [12] ;
unsigned short arr_9 [12] [12] [12] ;
unsigned int arr_15 [12] [12] [12] [12] ;
unsigned long long int arr_20 [12] [12] [12] [12] ;
unsigned int arr_23 [23] [23] ;
unsigned short arr_24 [23] [23] ;
unsigned int arr_25 [23] [23] ;
unsigned short arr_4 [20] ;
unsigned short arr_18 [12] [12] [12] [12] ;
unsigned long long int arr_19 [12] ;
_Bool arr_22 [12] [12] [12] ;
unsigned short arr_27 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 12558941579975108746ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 15047832507233451150ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 2764304051U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 1598312486;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)50927;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 270471872U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = 18112766814788550684ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? 2286072236U : 1970461135U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned short)16708;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_25 [i_0] [i_1] = 2248397790U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned short)47357;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned short)36935;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = 16413642179529611267ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (unsigned short)35153 : (unsigned short)56308;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
