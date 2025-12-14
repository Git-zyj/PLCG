#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-26;
long long int var_2 = 7570022930313418387LL;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
short var_10 = (short)17114;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 15892997009239128524ULL;
long long int var_16 = -2856349388193916456LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)121;
unsigned char var_19 = (unsigned char)57;
long long int var_20 = 4016640807348095079LL;
unsigned long long int var_21 = 1260924820853949507ULL;
long long int var_22 = 7564255871383338568LL;
short var_23 = (short)-24010;
short var_24 = (short)-14295;
long long int var_25 = 5214661118423054961LL;
signed char var_26 = (signed char)-115;
unsigned int var_27 = 3674109997U;
long long int var_28 = -754944274202162407LL;
unsigned int var_29 = 3310491458U;
short var_30 = (short)23674;
_Bool var_31 = (_Bool)1;
short var_32 = (short)19760;
signed char var_33 = (signed char)26;
long long int var_34 = 5466792308579663139LL;
unsigned long long int var_35 = 17608067059706769858ULL;
signed char var_36 = (signed char)-63;
_Bool var_37 = (_Bool)1;
signed char arr_0 [10] ;
short arr_1 [10] ;
short arr_5 [10] ;
long long int arr_9 [10] ;
_Bool arr_19 [10] [10] [10] [10] ;
_Bool arr_20 [10] [10] [10] [10] ;
long long int arr_13 [10] [10] ;
short arr_26 [10] [10] ;
short arr_27 [10] [10] [10] [10] [10] [10] ;
long long int arr_30 [10] ;
int arr_36 [10] [10] [10] [10] ;
_Bool arr_37 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)1876;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)26332;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = -6140398387988864886LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = 793816295152272314LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_26 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)13130 : (short)-13165;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (short)22915 : (short)-11541;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_30 [i_0] = -3783523340902983305LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1466575085 : -1215849102;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_37 [i_0] = (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
