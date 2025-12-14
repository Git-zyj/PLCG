#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17338065600155179854ULL;
int var_1 = -1839660978;
signed char var_2 = (signed char)-5;
long long int var_5 = -5952902004464264614LL;
long long int var_6 = 8908774418190349708LL;
short var_7 = (short)-1796;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)183;
unsigned int var_13 = 1869261298U;
int var_14 = 383097022;
int zero = 0;
unsigned int var_17 = 3725137710U;
unsigned short var_18 = (unsigned short)13925;
unsigned long long int var_19 = 1031987058216656802ULL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)44;
unsigned long long int var_22 = 15156602202395465654ULL;
int var_23 = -722502399;
unsigned short var_24 = (unsigned short)64399;
unsigned short var_25 = (unsigned short)38672;
_Bool var_26 = (_Bool)0;
signed char var_27 = (signed char)82;
int var_28 = 2007467515;
unsigned short var_29 = (unsigned short)12321;
unsigned char var_30 = (unsigned char)25;
long long int var_31 = -6938555954079087833LL;
unsigned short var_32 = (unsigned short)59279;
int var_33 = 2111418712;
long long int var_34 = 2097250677796271343LL;
unsigned int var_35 = 1496366921U;
long long int var_36 = 2584570217602370293LL;
unsigned char var_37 = (unsigned char)57;
short var_38 = (short)32433;
int var_39 = 99565421;
unsigned int var_40 = 2145154014U;
unsigned char arr_0 [18] [18] ;
unsigned char arr_1 [18] [18] ;
unsigned short arr_2 [18] [18] ;
short arr_3 [18] ;
unsigned int arr_4 [10] ;
unsigned int arr_6 [10] ;
unsigned long long int arr_7 [24] ;
unsigned char arr_10 [24] ;
unsigned short arr_11 [24] ;
unsigned char arr_13 [24] [24] [24] ;
int arr_14 [24] [24] [24] [24] ;
_Bool arr_16 [24] [24] [24] [24] ;
short arr_18 [24] [24] [24] [24] [24] [24] ;
_Bool arr_19 [24] [24] [24] [24] [24] ;
unsigned int arr_20 [24] ;
unsigned int arr_27 [22] ;
int arr_29 [22] ;
unsigned long long int arr_30 [22] [22] [22] [22] ;
unsigned long long int arr_31 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)136 : (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)20893 : (unsigned short)18815;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)11168 : (short)-5109;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 428553565U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 1199387991U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 18261897072996906806ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)45100 : (unsigned short)41755;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)6 : (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 334617591;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)25408;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 27088965U : 4206059070U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = 3810631587U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? -600043235 : 1848558804;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 3035180625610222795ULL : 3514930145479915530ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = 11484855359700108422ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
