#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37100;
unsigned short var_2 = (unsigned short)249;
unsigned short var_3 = (unsigned short)59907;
signed char var_4 = (signed char)-82;
unsigned short var_5 = (unsigned short)22608;
signed char var_8 = (signed char)59;
unsigned short var_10 = (unsigned short)46159;
unsigned short var_11 = (unsigned short)26543;
signed char var_14 = (signed char)-117;
long long int var_15 = -6970319700303988743LL;
long long int var_16 = 797233670899137382LL;
int zero = 0;
signed char var_18 = (signed char)-59;
unsigned short var_19 = (unsigned short)38919;
long long int var_20 = -1744022079693957120LL;
long long int var_21 = 6252454159157173970LL;
signed char var_22 = (signed char)-111;
long long int var_23 = 7996940918848974134LL;
long long int var_24 = 779778634541559179LL;
unsigned short var_25 = (unsigned short)9590;
signed char arr_0 [17] ;
unsigned short arr_1 [17] ;
signed char arr_4 [17] ;
long long int arr_5 [17] ;
signed char arr_8 [11] ;
signed char arr_10 [11] ;
unsigned short arr_2 [17] ;
unsigned short arr_3 [17] ;
signed char arr_6 [17] ;
long long int arr_13 [11] [11] ;
signed char arr_14 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-106 : (signed char)-42;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)58774;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 8055647549272350644LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)28570 : (unsigned short)48786;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)30107 : (unsigned short)19433;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 6889695708572273012LL : -5122827533246926000LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)59 : (signed char)18;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
