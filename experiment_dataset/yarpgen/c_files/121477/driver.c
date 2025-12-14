#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)13;
unsigned int var_2 = 2203600136U;
unsigned short var_3 = (unsigned short)1277;
unsigned long long int var_4 = 12371031077303023221ULL;
unsigned char var_5 = (unsigned char)150;
long long int var_7 = 2355711737251732274LL;
unsigned short var_8 = (unsigned short)64701;
unsigned char var_10 = (unsigned char)53;
unsigned short var_11 = (unsigned short)59319;
long long int var_13 = 9133908892033295185LL;
unsigned int var_14 = 1618146016U;
unsigned long long int var_15 = 16819073742362890496ULL;
signed char var_16 = (signed char)41;
int zero = 0;
unsigned int var_17 = 323708723U;
long long int var_18 = -5412933786774177297LL;
_Bool var_19 = (_Bool)1;
long long int var_20 = -7448458033714961576LL;
unsigned short var_21 = (unsigned short)16272;
unsigned long long int var_22 = 16425024573342615641ULL;
int var_23 = -709595446;
int var_24 = 562585900;
unsigned char var_25 = (unsigned char)235;
int var_26 = 703886302;
unsigned int var_27 = 3941001149U;
unsigned long long int var_28 = 6845616873161873812ULL;
int var_29 = 1914309146;
unsigned short var_30 = (unsigned short)45960;
_Bool var_31 = (_Bool)1;
unsigned int var_32 = 1377190791U;
_Bool var_33 = (_Bool)0;
unsigned short var_34 = (unsigned short)31797;
_Bool var_35 = (_Bool)1;
unsigned short var_36 = (unsigned short)41714;
int var_37 = 1278984685;
unsigned long long int var_38 = 11962701676476718283ULL;
unsigned short arr_0 [10] ;
unsigned short arr_1 [10] ;
unsigned short arr_5 [10] [10] [10] [10] ;
unsigned short arr_6 [10] ;
unsigned int arr_7 [10] [10] [10] [10] ;
long long int arr_11 [10] [10] [10] [10] [10] ;
short arr_12 [10] [10] ;
unsigned char arr_14 [10] [10] [10] ;
short arr_15 [10] ;
_Bool arr_16 [10] [10] [10] [10] ;
signed char arr_19 [17] ;
unsigned int arr_20 [17] [17] ;
_Bool arr_21 [17] [17] ;
long long int arr_22 [17] [17] ;
_Bool arr_23 [17] [17] [17] [17] ;
unsigned long long int arr_26 [17] ;
unsigned char arr_28 [17] [17] [17] [17] [17] ;
long long int arr_31 [19] ;
unsigned short arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)6477;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)33610;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned short)52733;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned short)22153;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 3135285154U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = 5845552002863800999LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (short)21463;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = (short)26725;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? 892200361U : 1333144228U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? 471074989209789286LL : -7629172128041289136LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? 3554378794886842125ULL : 18197890531087889219ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned char)163 : (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_31 [i_0] = -2548405331672051436LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)3519;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
