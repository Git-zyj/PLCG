#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4226485640904998684LL;
signed char var_1 = (signed char)67;
unsigned char var_2 = (unsigned char)233;
unsigned long long int var_5 = 16930481296469015112ULL;
_Bool var_6 = (_Bool)0;
int var_12 = 239904048;
unsigned short var_13 = (unsigned short)25162;
int var_14 = -714413475;
short var_16 = (short)-7254;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)77;
int zero = 0;
unsigned int var_19 = 2216379988U;
unsigned short var_20 = (unsigned short)34992;
int var_21 = -995347341;
signed char var_22 = (signed char)51;
unsigned int var_23 = 835108957U;
unsigned long long int var_24 = 11190436186415792015ULL;
unsigned long long int var_25 = 13501140199563987948ULL;
unsigned short var_26 = (unsigned short)13570;
short var_27 = (short)19306;
unsigned long long int var_28 = 13116004481114975875ULL;
signed char var_29 = (signed char)-68;
int var_30 = 1532459261;
unsigned long long int var_31 = 10216673620194574482ULL;
int var_32 = -1982673573;
unsigned short var_33 = (unsigned short)35378;
unsigned long long int var_34 = 5161210531259609090ULL;
unsigned long long int var_35 = 15695562110353190683ULL;
int var_36 = 515158698;
_Bool var_37 = (_Bool)1;
_Bool var_38 = (_Bool)1;
unsigned short var_39 = (unsigned short)56802;
_Bool var_40 = (_Bool)0;
unsigned int var_41 = 2121768392U;
unsigned short var_42 = (unsigned short)42782;
unsigned long long int var_43 = 8989463599642096876ULL;
_Bool var_44 = (_Bool)0;
unsigned char var_45 = (unsigned char)14;
long long int var_46 = 8636578553385848990LL;
signed char var_47 = (signed char)118;
unsigned long long int var_48 = 14306430956519724648ULL;
signed char var_49 = (signed char)53;
signed char var_50 = (signed char)-99;
long long int var_51 = 3684234767667862862LL;
unsigned short var_52 = (unsigned short)36759;
unsigned int var_53 = 2565629872U;
unsigned char var_54 = (unsigned char)240;
unsigned short var_55 = (unsigned short)29829;
unsigned short var_56 = (unsigned short)23100;
signed char arr_0 [25] [25] ;
signed char arr_1 [25] ;
unsigned long long int arr_2 [25] [25] ;
unsigned long long int arr_3 [22] ;
int arr_4 [22] [22] ;
signed char arr_7 [14] ;
_Bool arr_10 [14] [14] ;
signed char arr_12 [14] [14] [14] [14] ;
signed char arr_13 [14] [14] [14] [14] ;
_Bool arr_14 [14] [14] [14] ;
long long int arr_17 [14] [14] [14] [14] [14] [14] [14] ;
unsigned short arr_19 [14] [14] [14] [14] [14] ;
signed char arr_20 [14] ;
_Bool arr_23 [14] [14] [14] [14] ;
unsigned short arr_25 [14] [14] [14] [14] [14] ;
_Bool arr_26 [14] [14] [14] ;
int arr_27 [14] [14] [14] [14] [14] ;
unsigned short arr_31 [14] [14] [14] [14] [14] [14] ;
unsigned short arr_33 [14] [14] [14] [14] [14] [14] [14] ;
int arr_35 [14] [14] [14] [14] [14] [14] ;
_Bool arr_36 [14] ;
unsigned long long int arr_39 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 10765625774231997105ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 6864616038310803587ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = -1583614888;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-52 : (signed char)102;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? 8420062187659378933LL : -3896035498645286550LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)34816 : (unsigned short)17936;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (signed char)-35 : (signed char)53;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)13112;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 1414744690 : -1955042108;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned short)53969 : (unsigned short)52903;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)30723;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? -948886274 : 1101816786;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 7633290074279493187ULL : 710405579316326298ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
