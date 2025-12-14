#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 290667043U;
unsigned int var_4 = 1439180117U;
unsigned short var_6 = (unsigned short)14979;
unsigned long long int var_8 = 674333948784224416ULL;
unsigned short var_9 = (unsigned short)49604;
unsigned int var_10 = 1861545658U;
unsigned long long int var_11 = 5646846479577160117ULL;
unsigned int var_12 = 3567127192U;
int var_14 = 1788679257;
unsigned char var_15 = (unsigned char)6;
unsigned int var_16 = 142655333U;
unsigned char var_17 = (unsigned char)104;
long long int var_18 = -3912687517425145489LL;
int zero = 0;
signed char var_19 = (signed char)40;
unsigned short var_20 = (unsigned short)51640;
long long int var_21 = 7846599144112887099LL;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 374302139U;
signed char var_24 = (signed char)-88;
signed char var_25 = (signed char)118;
signed char var_26 = (signed char)-120;
unsigned int var_27 = 470925054U;
unsigned short var_28 = (unsigned short)38910;
unsigned char var_29 = (unsigned char)4;
short var_30 = (short)3555;
short var_31 = (short)-22431;
int var_32 = -1371806286;
_Bool var_33 = (_Bool)0;
signed char var_34 = (signed char)-23;
signed char var_35 = (signed char)27;
unsigned short var_36 = (unsigned short)15610;
short var_37 = (short)-25549;
short arr_0 [18] [18] ;
unsigned char arr_1 [18] [18] ;
unsigned int arr_5 [18] [18] [18] ;
unsigned short arr_9 [18] [18] [18] [18] [18] [18] ;
short arr_10 [18] [18] ;
_Bool arr_12 [18] [18] [18] [18] [18] [18] ;
unsigned long long int arr_13 [18] [18] [18] [18] ;
long long int arr_18 [18] [18] ;
short arr_30 [18] [18] ;
unsigned int arr_8 [18] ;
short arr_27 [18] [18] ;
unsigned char arr_31 [18] ;
unsigned int arr_36 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (short)18197;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1192046919U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)40108;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (short)16791;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 13135675737745570421ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = 8950964141613017870LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_30 [i_0] [i_1] = (short)-10951;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 3229371665U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_27 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-23390 : (short)15033;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_31 [i_0] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_36 [i_0] = 3188814214U;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_36 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
