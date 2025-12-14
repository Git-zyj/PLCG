#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)27;
long long int var_1 = 6544828806888789103LL;
long long int var_2 = -7081532752388993168LL;
signed char var_3 = (signed char)79;
short var_4 = (short)32515;
int var_6 = 1564038203;
signed char var_7 = (signed char)-74;
unsigned char var_8 = (unsigned char)163;
_Bool var_9 = (_Bool)1;
long long int var_12 = -3551980734070300852LL;
short var_13 = (short)6536;
unsigned int var_14 = 1073712648U;
short var_15 = (short)6030;
unsigned short var_17 = (unsigned short)57581;
int zero = 0;
short var_18 = (short)5720;
unsigned long long int var_19 = 17475295876662172607ULL;
signed char var_20 = (signed char)88;
unsigned short var_21 = (unsigned short)31540;
signed char var_22 = (signed char)-64;
long long int var_23 = 8722311615092348258LL;
short var_24 = (short)18089;
short var_25 = (short)16092;
short var_26 = (short)6812;
signed char var_27 = (signed char)-30;
unsigned short var_28 = (unsigned short)45325;
unsigned long long int var_29 = 12371583042794683372ULL;
signed char var_30 = (signed char)9;
long long int var_31 = -998185713930975694LL;
short var_32 = (short)24856;
_Bool var_33 = (_Bool)0;
int var_34 = 1804962230;
unsigned char var_35 = (unsigned char)173;
int var_36 = 1938393040;
short var_37 = (short)-4916;
short var_38 = (short)12282;
short var_39 = (short)2037;
unsigned long long int var_40 = 12190263485400597652ULL;
int var_41 = -81084956;
short var_42 = (short)-1074;
_Bool var_43 = (_Bool)1;
unsigned long long int var_44 = 2116364524834085209ULL;
unsigned int var_45 = 2522999764U;
short var_46 = (short)10684;
unsigned char var_47 = (unsigned char)180;
int var_48 = -481112455;
long long int var_49 = -4154819828248581044LL;
unsigned char var_50 = (unsigned char)223;
short var_51 = (short)-11645;
signed char var_52 = (signed char)-121;
unsigned int var_53 = 386504936U;
int var_54 = -509399923;
unsigned long long int var_55 = 8339129486164880884ULL;
_Bool var_56 = (_Bool)1;
unsigned int var_57 = 927694158U;
unsigned char var_58 = (unsigned char)164;
unsigned int var_59 = 2144896135U;
unsigned long long int arr_0 [17] [17] ;
unsigned long long int arr_1 [17] ;
long long int arr_4 [17] ;
short arr_5 [17] [17] ;
short arr_6 [17] [17] [17] ;
long long int arr_7 [17] [17] [17] ;
unsigned long long int arr_8 [17] ;
unsigned long long int arr_9 [17] [17] ;
unsigned short arr_10 [17] [17] [17] ;
short arr_14 [17] [17] [17] [17] [17] ;
short arr_15 [17] [17] [17] [17] [17] ;
short arr_16 [17] [17] [17] [17] [17] ;
int arr_18 [17] ;
short arr_20 [17] [17] ;
long long int arr_22 [17] [17] [17] [17] [17] [17] ;
unsigned char arr_23 [17] [17] [17] [17] [17] ;
unsigned long long int arr_32 [17] [17] [17] ;
unsigned int arr_44 [17] ;
long long int arr_48 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 3627201409921506806ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 17199673468011785825ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 4192725345384240026LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-5650;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)27655;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -3841107984499705900LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 2206075824443384877ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = 6140283380592234327ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)3606;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)28855 : (short)3485;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)19313 : (short)20799;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)7626;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? -1698028417 : -418696870;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_20 [i_0] [i_1] = (short)23848;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 5850610720171067519LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = 5962509581234143319ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_44 [i_0] = 2279434313U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = -1742120047748779976LL;
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
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
