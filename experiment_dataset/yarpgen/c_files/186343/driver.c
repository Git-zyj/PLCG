#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2525601388U;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
long long int var_5 = -736816242968861259LL;
int var_6 = 840779526;
unsigned long long int var_7 = 3427817280580717283ULL;
unsigned char var_8 = (unsigned char)255;
unsigned char var_9 = (unsigned char)44;
unsigned int var_10 = 3835583419U;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 530888375474682401ULL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1148142385U;
unsigned char var_16 = (unsigned char)167;
unsigned long long int var_17 = 2904741561436515055ULL;
unsigned long long int var_18 = 3314151872578480618ULL;
unsigned char var_19 = (unsigned char)136;
int zero = 0;
int var_20 = 2013271070;
signed char var_21 = (signed char)-56;
int var_22 = -569429097;
int var_23 = -810888793;
_Bool var_24 = (_Bool)0;
int var_25 = -1096506767;
_Bool var_26 = (_Bool)1;
long long int var_27 = 6417533110940615304LL;
unsigned short var_28 = (unsigned short)48998;
int var_29 = 1391707954;
unsigned short var_30 = (unsigned short)29987;
short var_31 = (short)-30471;
signed char var_32 = (signed char)125;
_Bool var_33 = (_Bool)1;
_Bool var_34 = (_Bool)1;
signed char var_35 = (signed char)-120;
unsigned int var_36 = 2889461910U;
_Bool var_37 = (_Bool)1;
unsigned short var_38 = (unsigned short)47818;
int var_39 = -1440354397;
long long int var_40 = -2893960729471015120LL;
long long int var_41 = -2236504976911902023LL;
int var_42 = -1414744320;
signed char var_43 = (signed char)42;
short var_44 = (short)31436;
short var_45 = (short)-20419;
unsigned int var_46 = 1210960822U;
signed char var_47 = (signed char)-100;
int var_48 = -715669225;
int var_49 = -1709916217;
signed char var_50 = (signed char)-118;
int var_51 = 46428507;
signed char var_52 = (signed char)12;
int var_53 = 955526270;
_Bool var_54 = (_Bool)0;
short var_55 = (short)-15532;
_Bool var_56 = (_Bool)0;
unsigned short var_57 = (unsigned short)46425;
int var_58 = -1221848744;
unsigned char var_59 = (unsigned char)44;
unsigned int var_60 = 3882146439U;
signed char var_61 = (signed char)72;
_Bool arr_1 [25] ;
_Bool arr_2 [25] ;
unsigned short arr_3 [25] [25] ;
_Bool arr_6 [25] [25] ;
unsigned int arr_7 [25] [25] ;
_Bool arr_10 [25] [25] [25] ;
unsigned long long int arr_16 [25] [25] ;
unsigned char arr_17 [25] [25] [25] [25] ;
_Bool arr_27 [25] [25] [25] [25] ;
int arr_28 [25] [25] [25] [25] ;
signed char arr_38 [25] [25] [25] [25] ;
_Bool arr_39 [25] [25] [25] [25] [25] [25] ;
unsigned char arr_43 [25] [25] ;
signed char arr_59 [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)35031;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = 3041970548U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = 18441339196332735454ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = 743063588;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_43 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)198 : (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)9 : (signed char)-78;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
