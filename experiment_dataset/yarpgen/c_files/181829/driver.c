#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 17889187069445647189ULL;
unsigned int var_4 = 116775987U;
unsigned long long int var_6 = 5775584191012790301ULL;
unsigned char var_7 = (unsigned char)167;
short var_9 = (short)23604;
short var_10 = (short)-9873;
unsigned int var_13 = 1343287491U;
unsigned int var_15 = 2726277497U;
int zero = 0;
unsigned char var_16 = (unsigned char)68;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-99;
unsigned long long int var_20 = 737884139484908002ULL;
short var_21 = (short)-31076;
short var_22 = (short)16621;
unsigned int var_23 = 2480650273U;
short var_24 = (short)18948;
unsigned long long int var_25 = 6191610668635990404ULL;
short var_26 = (short)-2855;
int var_27 = -496986113;
signed char var_28 = (signed char)114;
unsigned char var_29 = (unsigned char)73;
unsigned long long int var_30 = 8177075562522901044ULL;
unsigned long long int var_31 = 12582137346570744611ULL;
unsigned int var_32 = 2369569278U;
signed char var_33 = (signed char)110;
unsigned int var_34 = 1002509521U;
unsigned long long int var_35 = 13908761990793284774ULL;
short var_36 = (short)12520;
unsigned long long int arr_1 [18] ;
unsigned int arr_3 [18] [18] ;
signed char arr_4 [18] ;
unsigned int arr_5 [18] [18] ;
signed char arr_7 [18] [18] ;
unsigned long long int arr_9 [18] [18] [18] [18] [18] [18] ;
_Bool arr_11 [18] ;
signed char arr_12 [18] [18] ;
_Bool arr_16 [18] ;
unsigned long long int arr_18 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 18273244514066848829ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 1910753974U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 2499502189U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 15828866849278089566ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 13298703642749678857ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
