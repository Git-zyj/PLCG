#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6367245865374827082LL;
unsigned short var_1 = (unsigned short)56133;
long long int var_2 = 8926360402749140152LL;
signed char var_4 = (signed char)78;
signed char var_9 = (signed char)88;
long long int var_11 = 5106430223164857277LL;
unsigned int var_12 = 1319756522U;
unsigned int var_14 = 1837955073U;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)120;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-24826;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 4242565406688992978ULL;
unsigned int var_24 = 3954010502U;
long long int var_25 = 3232883588080235724LL;
unsigned short var_26 = (unsigned short)16855;
unsigned long long int var_27 = 15239821624170738601ULL;
unsigned char var_28 = (unsigned char)49;
unsigned short var_29 = (unsigned short)53616;
_Bool var_30 = (_Bool)1;
_Bool var_31 = (_Bool)1;
signed char var_32 = (signed char)3;
_Bool var_33 = (_Bool)1;
_Bool var_34 = (_Bool)0;
unsigned long long int var_35 = 6793512626095698517ULL;
unsigned int var_36 = 416081585U;
_Bool var_37 = (_Bool)1;
unsigned int var_38 = 3507793144U;
short var_39 = (short)-15168;
signed char var_40 = (signed char)-21;
int var_41 = -1074848636;
int arr_2 [17] [17] ;
long long int arr_8 [17] [17] [17] [17] ;
long long int arr_10 [17] [17] [17] ;
int arr_14 [19] [19] ;
unsigned short arr_15 [19] [19] ;
unsigned int arr_23 [19] [19] [19] [19] ;
unsigned int arr_12 [17] ;
_Bool arr_41 [11] ;
unsigned short arr_42 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = -1325899012;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 5194354812702320569LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -6805564478857089807LL : -4501179906717127749LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = 1235335462;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)37992;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2366961161U : 2087941135U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = 4201354170U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_41 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_42 [i_0] = (unsigned short)40055;
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_42 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
