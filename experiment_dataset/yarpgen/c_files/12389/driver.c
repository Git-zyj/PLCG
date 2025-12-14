#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3238071493277143076LL;
unsigned short var_1 = (unsigned short)35763;
_Bool var_2 = (_Bool)1;
long long int var_3 = -210853246395484100LL;
short var_4 = (short)-27669;
short var_5 = (short)-18215;
int var_6 = 646059323;
signed char var_7 = (signed char)41;
long long int var_8 = 4695450784536013335LL;
long long int var_9 = 7752803239644765744LL;
signed char var_10 = (signed char)-63;
unsigned char var_11 = (unsigned char)167;
unsigned short var_12 = (unsigned short)52101;
int zero = 0;
short var_13 = (short)23289;
_Bool var_14 = (_Bool)0;
short var_15 = (short)23433;
unsigned short var_16 = (unsigned short)21003;
unsigned short var_17 = (unsigned short)59385;
long long int var_18 = -8098976307886330586LL;
long long int var_19 = 804442420105549510LL;
short var_20 = (short)17896;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 5291484278860725114ULL;
unsigned char var_23 = (unsigned char)132;
signed char var_24 = (signed char)12;
int var_25 = -1392710012;
_Bool var_26 = (_Bool)0;
unsigned int var_27 = 3217900053U;
signed char var_28 = (signed char)122;
_Bool var_29 = (_Bool)1;
unsigned char var_30 = (unsigned char)84;
unsigned int var_31 = 2748911896U;
short var_32 = (short)-11424;
unsigned short var_33 = (unsigned short)14796;
unsigned int var_34 = 3849437913U;
int var_35 = -548334627;
unsigned short var_36 = (unsigned short)33243;
long long int var_37 = -5218006800514485860LL;
short var_38 = (short)-22549;
unsigned char var_39 = (unsigned char)249;
long long int var_40 = -5086219448728565741LL;
int var_41 = 1785159865;
unsigned char var_42 = (unsigned char)115;
signed char var_43 = (signed char)27;
unsigned char var_44 = (unsigned char)94;
unsigned long long int var_45 = 10266015787635541335ULL;
int var_46 = 1075656187;
short var_47 = (short)-29669;
unsigned int var_48 = 154812005U;
short var_49 = (short)16479;
long long int arr_3 [20] ;
unsigned long long int arr_5 [20] [20] ;
short arr_8 [20] [20] [20] [20] ;
long long int arr_12 [20] [20] [20] [20] [20] [20] ;
unsigned int arr_19 [22] [22] ;
signed char arr_23 [22] [22] [22] ;
unsigned int arr_24 [22] [22] [22] [22] ;
unsigned short arr_26 [22] [22] [22] [22] ;
int arr_35 [22] [22] [22] [22] [22] ;
unsigned char arr_36 [22] [22] [22] [22] [22] ;
short arr_37 [22] [22] [22] [22] [22] ;
unsigned long long int arr_38 [22] [22] [22] [22] [22] [22] [22] ;
unsigned short arr_39 [22] [22] [22] [22] [22] [22] [22] ;
long long int arr_42 [22] [22] [22] [22] [22] [22] ;
short arr_45 [22] [22] [22] [22] [22] [22] [22] ;
unsigned short arr_49 [22] ;
unsigned int arr_16 [20] [20] ;
unsigned short arr_27 [22] [22] [22] ;
_Bool arr_47 [22] [22] ;
unsigned char arr_57 [22] ;
unsigned long long int arr_65 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -4380839682592245805LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 1796674391024622000ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)-24055;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -5437972151286498428LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_19 [i_0] [i_1] = 2238232115U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3874678919U : 1541896406U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (unsigned short)55021;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -1007029277 : 559676767;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)26563 : (short)30240;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 17591226364136647834ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? (unsigned short)28703 : (unsigned short)39092;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 2153553797556377435LL : 1469809397961973811LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)29882;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_49 [i_0] = (unsigned short)39096;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_16 [i_0] [i_1] = 2915556046U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)11388 : (unsigned short)21965;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_47 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_57 [i_0] = (i_0 % 2 == 0) ? (unsigned char)53 : (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_65 [i_0] [i_1] = 14252943715153521241ULL;
}

void checksum() {
    hash(&seed, var_13);
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
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_47 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_57 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_65 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
