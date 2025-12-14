#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29415;
signed char var_1 = (signed char)-61;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-7;
unsigned short var_4 = (unsigned short)56222;
int var_5 = 205929;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)12758;
signed char var_9 = (signed char)5;
short var_13 = (short)20124;
int var_14 = -247883419;
long long int var_15 = 1473683414999868033LL;
long long int var_16 = -608308750796842056LL;
int zero = 0;
unsigned short var_18 = (unsigned short)22862;
signed char var_19 = (signed char)119;
unsigned short var_20 = (unsigned short)8282;
unsigned int var_21 = 2596298474U;
unsigned char var_22 = (unsigned char)146;
unsigned int var_23 = 3849767233U;
int var_24 = 1394335816;
short var_25 = (short)-26286;
signed char var_26 = (signed char)59;
unsigned char var_27 = (unsigned char)174;
int var_28 = -1840702413;
unsigned char var_29 = (unsigned char)151;
short var_30 = (short)-17067;
unsigned char var_31 = (unsigned char)91;
unsigned char var_32 = (unsigned char)75;
unsigned short var_33 = (unsigned short)15544;
signed char var_34 = (signed char)49;
short var_35 = (short)-7327;
unsigned short var_36 = (unsigned short)60237;
unsigned char var_37 = (unsigned char)163;
int var_38 = 1940761785;
unsigned int var_39 = 1295830733U;
short var_40 = (short)25987;
_Bool var_41 = (_Bool)0;
_Bool var_42 = (_Bool)1;
short var_43 = (short)28032;
signed char var_44 = (signed char)-11;
unsigned char var_45 = (unsigned char)135;
signed char var_46 = (signed char)107;
unsigned short var_47 = (unsigned short)13457;
unsigned short var_48 = (unsigned short)57601;
int var_49 = -912985185;
short var_50 = (short)27073;
unsigned long long int var_51 = 5834387729810501043ULL;
short var_52 = (short)29355;
long long int var_53 = -2072357335789648050LL;
long long int arr_0 [22] [22] ;
int arr_1 [22] ;
unsigned int arr_2 [22] ;
long long int arr_3 [22] [22] ;
unsigned int arr_4 [22] ;
unsigned short arr_5 [22] ;
unsigned short arr_8 [22] [22] [22] [22] ;
short arr_9 [22] [22] [22] [22] ;
unsigned short arr_10 [22] ;
signed char arr_11 [22] [22] [22] ;
_Bool arr_13 [22] [22] [22] ;
int arr_17 [22] [22] [22] [22] ;
int arr_21 [22] [22] [22] [22] [22] ;
unsigned char arr_24 [22] [22] [22] [22] [22] [22] ;
int arr_25 [22] [22] ;
unsigned short arr_26 [22] [22] [22] [22] [22] ;
short arr_27 [22] [22] ;
unsigned short arr_29 [22] [22] [22] [22] [22] [22] [22] ;
int arr_34 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 6550501216812067560LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -1442706919;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 1066219069U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -8062954999493626043LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 1691368289U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)49140;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)37897;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)24054;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (unsigned short)50647;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 623157835;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = -1652016408;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_25 [i_0] [i_1] = -549864239;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)15226;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_27 [i_0] [i_1] = (short)10714;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)43660;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_34 [i_0] = -600335321;
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
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
