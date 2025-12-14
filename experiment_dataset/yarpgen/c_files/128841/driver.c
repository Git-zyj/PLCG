#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-89;
unsigned short var_1 = (unsigned short)51680;
long long int var_2 = 5800356663344739857LL;
unsigned int var_3 = 674889767U;
unsigned short var_5 = (unsigned short)6989;
long long int var_7 = 3673027838015641747LL;
unsigned char var_9 = (unsigned char)178;
unsigned long long int var_10 = 14643043297323039495ULL;
unsigned long long int var_11 = 12963721622639687550ULL;
signed char var_13 = (signed char)-12;
unsigned short var_14 = (unsigned short)59653;
unsigned short var_17 = (unsigned short)22620;
int zero = 0;
short var_18 = (short)-28506;
signed char var_19 = (signed char)-12;
long long int var_20 = -4220352177940709942LL;
short var_21 = (short)26187;
int var_22 = 267546203;
unsigned int var_23 = 3619613678U;
unsigned char var_24 = (unsigned char)238;
short var_25 = (short)-29298;
signed char var_26 = (signed char)105;
int var_27 = -2133938675;
long long int var_28 = 1878218356857850432LL;
long long int var_29 = 6140461288002876499LL;
short var_30 = (short)5404;
_Bool var_31 = (_Bool)1;
unsigned short var_32 = (unsigned short)53932;
unsigned int var_33 = 1023366057U;
unsigned long long int var_34 = 3146399871922969379ULL;
int var_35 = 1838204148;
unsigned int var_36 = 301794739U;
_Bool var_37 = (_Bool)1;
_Bool var_38 = (_Bool)0;
int var_39 = 2123028740;
unsigned long long int var_40 = 4775383757882431264ULL;
short arr_0 [14] [14] ;
unsigned char arr_1 [14] ;
unsigned char arr_2 [14] ;
unsigned int arr_3 [14] [14] ;
unsigned long long int arr_4 [14] [14] ;
short arr_6 [14] ;
_Bool arr_11 [14] [14] [14] [14] ;
signed char arr_12 [14] [14] [14] [14] ;
unsigned char arr_13 [14] [14] [14] ;
signed char arr_16 [14] [14] ;
int arr_19 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)24676;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 3851443246U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 16032923166611708667ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (short)29929;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 1980712400 : -87165652;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
