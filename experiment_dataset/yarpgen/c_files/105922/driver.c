#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4536077315123855073ULL;
unsigned char var_1 = (unsigned char)158;
unsigned long long int var_3 = 622026772414147152ULL;
unsigned short var_7 = (unsigned short)39295;
long long int var_8 = 1977592668773743069LL;
long long int var_9 = 6450113390930474025LL;
unsigned long long int var_11 = 15679630297717595079ULL;
unsigned long long int var_12 = 4319013396842508939ULL;
signed char var_14 = (signed char)127;
signed char var_15 = (signed char)-93;
unsigned int var_16 = 56117391U;
int zero = 0;
int var_17 = -393044692;
unsigned int var_18 = 389324877U;
unsigned long long int var_19 = 13686249917206649337ULL;
unsigned short var_20 = (unsigned short)11233;
int var_21 = 904799150;
long long int var_22 = 4073584696907777891LL;
short var_23 = (short)30934;
unsigned long long int var_24 = 14254322997468317669ULL;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 1750972815075066982ULL;
int var_27 = -1812147034;
short var_28 = (short)-27091;
short var_29 = (short)17907;
long long int arr_4 [13] ;
unsigned short arr_8 [13] [13] [13] ;
unsigned char arr_9 [13] [13] ;
unsigned char arr_14 [13] [13] [13] ;
unsigned int arr_17 [19] ;
unsigned char arr_18 [19] ;
long long int arr_19 [19] ;
unsigned int arr_20 [19] ;
short arr_22 [19] [19] ;
unsigned int arr_24 [19] [19] [19] ;
unsigned long long int arr_26 [19] [19] [19] [19] ;
signed char arr_30 [19] ;
signed char arr_31 [19] [19] [19] ;
unsigned long long int arr_33 [19] [19] [19] [19] ;
long long int arr_43 [19] ;
unsigned int arr_2 [13] ;
signed char arr_3 [13] ;
short arr_16 [13] ;
signed char arr_28 [19] ;
unsigned int arr_36 [19] [19] ;
signed char arr_39 [19] ;
unsigned long long int arr_40 [19] [19] [19] [19] ;
long long int arr_44 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 8051735289823183457LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)6408;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 3764975528U : 1176410982U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = -4338852544461213832LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = 3731400365U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_22 [i_0] [i_1] = (short)11269;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 4208910778U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = 17444804030803261211ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_30 [i_0] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = 10982692668619196767ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_43 [i_0] = (i_0 % 2 == 0) ? -1100290711188469570LL : -4248624749457377343LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 204329614U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (short)-28948 : (short)-20965;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (signed char)23 : (signed char)-47;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_36 [i_0] [i_1] = (i_1 % 2 == 0) ? 3772266748U : 1583379254U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? (signed char)16 : (signed char)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 4716410353463969907ULL : 13165836321168856383ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -673434134689662475LL : -1502371988300931867LL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_40 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_44 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
