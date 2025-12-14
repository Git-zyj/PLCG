#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -459545760;
unsigned long long int var_2 = 12678615479001420753ULL;
unsigned long long int var_3 = 7309918357894490929ULL;
unsigned long long int var_6 = 5281204802572563045ULL;
unsigned long long int var_7 = 7875489458004606869ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 926364749U;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 18279744055569992252ULL;
unsigned int var_14 = 140773358U;
unsigned long long int var_15 = 15606328838108982690ULL;
unsigned int var_16 = 3337655014U;
unsigned long long int var_17 = 16651513107529702511ULL;
int zero = 0;
unsigned int var_18 = 176448209U;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)17163;
unsigned long long int var_21 = 14390917777547871509ULL;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)0;
unsigned long long int var_25 = 18339226417761532859ULL;
_Bool var_26 = (_Bool)1;
int var_27 = -1138382450;
int var_28 = -871931458;
unsigned int var_29 = 1980381326U;
unsigned long long int var_30 = 14472070929921903796ULL;
_Bool var_31 = (_Bool)0;
int var_32 = -240339608;
unsigned long long int var_33 = 14885447984267970941ULL;
unsigned int arr_5 [14] [14] ;
unsigned long long int arr_18 [14] ;
int arr_22 [17] ;
unsigned int arr_23 [17] [17] ;
_Bool arr_25 [17] [17] [17] ;
unsigned short arr_19 [14] [14] [14] [14] ;
unsigned int arr_26 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 1962329436U : 3488545538U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = 6385458940172937762ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_22 [i_0] = 591908651;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? 288244426U : 2073112003U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)11623 : (unsigned short)21913;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3768750541U : 2480776239U;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
