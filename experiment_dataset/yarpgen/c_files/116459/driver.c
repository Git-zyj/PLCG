#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10803;
unsigned short var_2 = (unsigned short)20706;
unsigned long long int var_4 = 17767000953383319024ULL;
unsigned short var_5 = (unsigned short)13748;
signed char var_6 = (signed char)112;
int var_10 = 1042497461;
int var_12 = -920400390;
unsigned long long int var_13 = 1348065933183607368ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)15752;
unsigned short var_18 = (unsigned short)42302;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)56;
unsigned long long int var_21 = 8534940942403063388ULL;
int var_22 = 1221496748;
unsigned long long int var_23 = 8608255382457268399ULL;
unsigned short arr_1 [22] ;
unsigned long long int arr_2 [22] ;
_Bool arr_4 [22] [22] ;
int arr_6 [22] [22] [22] [22] ;
_Bool arr_7 [22] [22] [22] ;
unsigned short arr_13 [21] [21] ;
_Bool arr_8 [22] [22] ;
unsigned short arr_11 [21] ;
unsigned short arr_12 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)38675;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 10207811208808102092ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -1386204412;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)62349;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)40662 : (unsigned short)14841;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)31646 : (unsigned short)47613;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
