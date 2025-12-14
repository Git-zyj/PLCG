#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5045;
long long int var_1 = 5721740323743448640LL;
_Bool var_2 = (_Bool)0;
long long int var_3 = -1292737316450836065LL;
unsigned short var_4 = (unsigned short)55132;
int var_5 = -1696623859;
unsigned short var_6 = (unsigned short)32396;
short var_7 = (short)25335;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 6185972047337692787ULL;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)18948;
unsigned long long int var_12 = 824588898930174310ULL;
int var_13 = -197674971;
int zero = 0;
unsigned long long int var_14 = 17880674515575696166ULL;
int var_15 = -1376084410;
signed char var_16 = (signed char)62;
unsigned char var_17 = (unsigned char)91;
long long int var_18 = -6384494868432993009LL;
long long int var_19 = -6632191105767432596LL;
unsigned int var_20 = 2382681783U;
long long int var_21 = -372325601324357979LL;
long long int var_22 = 3400472191254218654LL;
long long int var_23 = -6847513681281715217LL;
unsigned long long int var_24 = 14370219368371567261ULL;
int var_25 = 1670857619;
short var_26 = (short)24127;
unsigned char var_27 = (unsigned char)238;
short var_28 = (short)-3980;
unsigned long long int var_29 = 11554398966012649465ULL;
int var_30 = 2029886431;
short var_31 = (short)-24128;
signed char var_32 = (signed char)-117;
long long int var_33 = 3988038112075001722LL;
unsigned int var_34 = 1448546168U;
signed char var_35 = (signed char)-72;
unsigned long long int var_36 = 1301541550342437220ULL;
short var_37 = (short)-1641;
short var_38 = (short)28123;
short arr_15 [24] [24] [24] [24] [24] ;
unsigned int arr_25 [20] ;
_Bool arr_26 [20] [20] ;
int arr_29 [20] ;
unsigned int arr_37 [20] [20] [20] [20] ;
unsigned int arr_38 [20] [20] [20] [20] ;
signed char arr_56 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-7618;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_25 [i_0] = 403729319U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_26 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_29 [i_0] = -747420822;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 955867519U : 1086542206U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 3929939759U : 620832619U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_56 [i_0] = (signed char)-96;
}

void checksum() {
    hash(&seed, var_14);
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_38 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_56 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
