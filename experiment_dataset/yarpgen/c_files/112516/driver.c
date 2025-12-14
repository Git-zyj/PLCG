#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)82;
long long int var_1 = 6165517070451431210LL;
int var_2 = -375554945;
unsigned int var_4 = 127907079U;
long long int var_5 = 3116582527888558076LL;
unsigned short var_6 = (unsigned short)26357;
unsigned char var_8 = (unsigned char)194;
unsigned int var_9 = 2860519560U;
signed char var_10 = (signed char)-41;
unsigned char var_11 = (unsigned char)180;
unsigned short var_12 = (unsigned short)36038;
unsigned long long int var_13 = 2532594910787630695ULL;
signed char var_14 = (signed char)-84;
unsigned char var_15 = (unsigned char)158;
unsigned long long int var_16 = 1278991387786745749ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -5024352724716784060LL;
signed char var_19 = (signed char)69;
int var_20 = -937033199;
long long int var_21 = -468288990661741265LL;
long long int var_22 = -4958994931014754187LL;
long long int var_23 = 5993085590921950346LL;
unsigned int var_24 = 457824572U;
unsigned char var_25 = (unsigned char)32;
signed char var_26 = (signed char)122;
unsigned char var_27 = (unsigned char)13;
signed char var_28 = (signed char)70;
long long int var_29 = -21313957343735953LL;
signed char var_30 = (signed char)-67;
unsigned int var_31 = 3688098269U;
short var_32 = (short)-1379;
unsigned int var_33 = 1875876552U;
unsigned int var_34 = 2834900776U;
short var_35 = (short)-25903;
unsigned short var_36 = (unsigned short)50402;
unsigned char var_37 = (unsigned char)22;
short var_38 = (short)-26373;
signed char var_39 = (signed char)9;
unsigned int var_40 = 2634949487U;
unsigned int var_41 = 760960032U;
unsigned long long int var_42 = 9674653045903021359ULL;
short arr_0 [23] [23] ;
unsigned char arr_1 [23] [23] ;
unsigned int arr_2 [23] ;
unsigned char arr_3 [23] ;
signed char arr_5 [20] [20] ;
signed char arr_6 [20] ;
unsigned int arr_11 [20] [20] [20] [20] ;
unsigned short arr_13 [20] ;
unsigned char arr_14 [20] [20] [20] [20] [20] ;
_Bool arr_19 [23] [23] ;
unsigned int arr_22 [23] ;
int arr_24 [23] [23] [23] ;
unsigned long long int arr_25 [23] ;
int arr_26 [23] [23] [23] [23] [23] [23] ;
short arr_27 [23] [23] [23] [23] [23] ;
unsigned char arr_47 [24] ;
long long int arr_48 [24] [24] [24] ;
unsigned int arr_49 [24] [24] ;
signed char arr_17 [20] [20] ;
unsigned char arr_21 [23] ;
unsigned int arr_30 [23] [23] [23] [23] [23] [23] [23] ;
_Bool arr_31 [23] [23] ;
unsigned short arr_44 [18] ;
unsigned long long int arr_45 [18] ;
signed char arr_56 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-14724;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 2443687682U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 3650620561U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (unsigned short)28980;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_19 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_22 [i_0] = 3246038508U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 251851702;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = 6886679117614453683ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1221317970;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-21815;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_47 [i_0] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = 5805539852647245403LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_49 [i_0] [i_1] = (i_1 % 2 == 0) ? 4292519154U : 3011993715U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)105 : (signed char)21;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? 3833094550U : 3876953765U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_31 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_44 [i_0] = (i_0 % 2 == 0) ? (unsigned short)14310 : (unsigned short)7074;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? 15856456985031251911ULL : 7106766238096835568ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_56 [i_0] = (signed char)22;
}

void checksum() {
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
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_56 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
