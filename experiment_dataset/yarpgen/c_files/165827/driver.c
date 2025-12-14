#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10386;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)14395;
int var_5 = -1775212217;
unsigned short var_6 = (unsigned short)59483;
unsigned long long int var_7 = 3172686830715261361ULL;
unsigned short var_8 = (unsigned short)40304;
short var_9 = (short)-6114;
unsigned long long int var_10 = 4742121067064636305ULL;
int var_11 = 577942518;
long long int var_12 = 3798845891719514129LL;
int var_13 = -879617486;
unsigned short var_14 = (unsigned short)6270;
unsigned long long int var_16 = 3474329998933471387ULL;
short var_17 = (short)-4271;
unsigned long long int var_18 = 18197621320004869087ULL;
int zero = 0;
signed char var_19 = (signed char)-107;
unsigned short var_20 = (unsigned short)35355;
long long int var_21 = 3571236651773112151LL;
unsigned short var_22 = (unsigned short)13857;
unsigned short var_23 = (unsigned short)38042;
unsigned int var_24 = 2059411396U;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 3161215090659937798ULL;
int var_27 = 162762639;
unsigned int var_28 = 2565403322U;
short var_29 = (short)-9432;
int var_30 = -943333463;
_Bool var_31 = (_Bool)1;
unsigned int var_32 = 1775703133U;
_Bool var_33 = (_Bool)1;
signed char var_34 = (signed char)-87;
int var_35 = 187758985;
int var_36 = 2137765588;
unsigned char var_37 = (unsigned char)91;
int var_38 = 931088894;
int var_39 = -850041721;
unsigned short var_40 = (unsigned short)36333;
signed char var_41 = (signed char)54;
_Bool arr_0 [12] [12] ;
unsigned int arr_1 [12] ;
unsigned char arr_3 [12] [12] [12] ;
int arr_5 [12] ;
_Bool arr_9 [12] [12] ;
unsigned long long int arr_10 [12] ;
unsigned int arr_12 [12] ;
unsigned long long int arr_15 [12] [12] ;
signed char arr_16 [12] [12] [12] [12] [12] [12] [12] ;
unsigned short arr_17 [12] [12] [12] [12] ;
unsigned short arr_21 [12] [12] ;
short arr_29 [17] ;
unsigned long long int arr_30 [17] ;
unsigned short arr_6 [12] [12] ;
unsigned char arr_7 [12] ;
short arr_18 [12] [12] ;
short arr_28 [12] [12] [12] [12] ;
int arr_31 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1482426584U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)101 : (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 446408221;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 7037483449607368838ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = 2778089282U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_15 [i_0] [i_1] = 8472453085389627447ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (signed char)75 : (signed char)115;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)11835;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)48311 : (unsigned short)19341;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_29 [i_0] = (short)27836;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_30 [i_0] = 5448027364565103768ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)4828 : (unsigned short)16294;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)47 : (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-22616 : (short)16238;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-27944 : (short)6907;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_31 [i_0] = 1981718512;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
