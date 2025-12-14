#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 738441261U;
long long int var_2 = -61429194396337060LL;
signed char var_3 = (signed char)-114;
unsigned char var_5 = (unsigned char)39;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)0;
signed char var_8 = (signed char)51;
signed char var_9 = (signed char)-65;
signed char var_10 = (signed char)21;
unsigned int var_11 = 1829681921U;
signed char var_12 = (signed char)104;
unsigned int var_13 = 4195811448U;
_Bool var_14 = (_Bool)1;
long long int var_15 = -8369501761562576062LL;
signed char var_16 = (signed char)42;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)129;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)121;
signed char var_21 = (signed char)32;
unsigned long long int var_22 = 13868592509736269961ULL;
unsigned int var_23 = 2358826194U;
signed char var_24 = (signed char)67;
_Bool var_25 = (_Bool)1;
unsigned char var_26 = (unsigned char)99;
signed char var_27 = (signed char)39;
signed char var_28 = (signed char)106;
unsigned char var_29 = (unsigned char)205;
long long int var_30 = 3883158734370868115LL;
_Bool var_31 = (_Bool)0;
long long int var_32 = -6237795290772681622LL;
unsigned int var_33 = 1790196978U;
_Bool var_34 = (_Bool)1;
unsigned int var_35 = 898636885U;
signed char var_36 = (signed char)-7;
signed char var_37 = (signed char)-104;
unsigned long long int var_38 = 9380296024846262043ULL;
unsigned char var_39 = (unsigned char)212;
signed char var_40 = (signed char)41;
_Bool var_41 = (_Bool)1;
_Bool var_42 = (_Bool)0;
long long int var_43 = 868126067397937303LL;
unsigned long long int var_44 = 6217892008363237382ULL;
_Bool var_45 = (_Bool)0;
unsigned int var_46 = 3250202250U;
signed char var_47 = (signed char)-89;
unsigned char var_48 = (unsigned char)203;
signed char var_49 = (signed char)-83;
unsigned int var_50 = 2222327754U;
_Bool var_51 = (_Bool)0;
unsigned char var_52 = (unsigned char)194;
unsigned int var_53 = 1370388989U;
long long int var_54 = -8562520639636714903LL;
_Bool var_55 = (_Bool)0;
unsigned long long int var_56 = 208722637214353890ULL;
long long int var_57 = -6690567116801194539LL;
signed char var_58 = (signed char)-98;
signed char var_59 = (signed char)-60;
unsigned int var_60 = 2655285225U;
unsigned char var_61 = (unsigned char)244;
unsigned char var_62 = (unsigned char)173;
unsigned char var_63 = (unsigned char)190;
unsigned char arr_0 [22] [22] ;
unsigned char arr_1 [22] ;
signed char arr_2 [22] [22] [22] ;
_Bool arr_3 [22] [22] ;
_Bool arr_4 [22] ;
unsigned int arr_5 [22] ;
unsigned char arr_6 [22] [22] [22] [22] ;
unsigned char arr_8 [22] [22] [22] [22] [22] ;
_Bool arr_9 [22] [22] [22] [22] ;
unsigned char arr_10 [22] [22] [22] [22] ;
long long int arr_11 [22] [22] [22] [22] [22] [22] ;
_Bool arr_12 [22] [22] [22] ;
unsigned char arr_15 [22] [22] ;
_Bool arr_16 [22] [22] [22] ;
signed char arr_17 [22] [22] [22] [22] ;
unsigned char arr_19 [22] [22] [22] [22] ;
unsigned long long int arr_20 [22] [22] [22] ;
signed char arr_22 [22] [22] ;
unsigned int arr_24 [15] ;
unsigned char arr_26 [15] [15] ;
signed char arr_27 [15] [15] [15] ;
signed char arr_28 [15] [15] ;
long long int arr_30 [15] [15] [15] ;
signed char arr_40 [15] [15] [15] [15] ;
unsigned long long int arr_45 [14] [14] ;
unsigned char arr_49 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)142 : (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 4114524419U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)254 : (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -8006693660900528175LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 3194822285227471861ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_22 [i_0] [i_1] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_24 [i_0] = 2177516090U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_26 [i_0] [i_1] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_28 [i_0] [i_1] = (signed char)37;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = 6776497811054342603LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (signed char)-63;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_45 [i_0] [i_1] = 17598106471357058662ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = (unsigned char)206;
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
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
