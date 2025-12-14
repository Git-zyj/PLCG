#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1365447609;
unsigned short var_1 = (unsigned short)34516;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 2126161660U;
signed char var_4 = (signed char)-8;
unsigned int var_5 = 4255154621U;
unsigned long long int var_6 = 16858450076118878635ULL;
int var_7 = -531819110;
int var_8 = 423491781;
unsigned short var_9 = (unsigned short)35607;
unsigned int var_10 = 3104309719U;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned int var_14 = 2358077856U;
int zero = 0;
unsigned char var_15 = (unsigned char)173;
long long int var_16 = -2559545906157667442LL;
long long int var_17 = 6067456136447090345LL;
long long int var_18 = 4580534291797353622LL;
long long int var_19 = 3515191633075068021LL;
unsigned short var_20 = (unsigned short)16420;
int var_21 = -79481212;
unsigned int var_22 = 3115788589U;
short var_23 = (short)-15363;
_Bool var_24 = (_Bool)0;
unsigned int var_25 = 1053559365U;
int var_26 = 1992509735;
unsigned short var_27 = (unsigned short)32061;
_Bool var_28 = (_Bool)1;
unsigned long long int var_29 = 5849539118246748774ULL;
unsigned long long int var_30 = 17505805251993859078ULL;
unsigned long long int var_31 = 1253116524057357964ULL;
signed char var_32 = (signed char)86;
unsigned long long int var_33 = 17732209709539313775ULL;
unsigned short var_34 = (unsigned short)51283;
unsigned short var_35 = (unsigned short)29278;
unsigned long long int var_36 = 16956242251740749361ULL;
_Bool var_37 = (_Bool)1;
unsigned short var_38 = (unsigned short)19082;
unsigned char var_39 = (unsigned char)18;
unsigned int var_40 = 575157586U;
unsigned long long int var_41 = 5515231875563894893ULL;
unsigned int var_42 = 3403539787U;
long long int var_43 = 4370814857386267360LL;
int var_44 = 77512828;
unsigned int var_45 = 3268084588U;
unsigned int var_46 = 2315514976U;
_Bool var_47 = (_Bool)0;
int var_48 = -1587008158;
_Bool var_49 = (_Bool)1;
int var_50 = -1097637566;
int var_51 = -1677963522;
_Bool var_52 = (_Bool)1;
int var_53 = 1650180163;
unsigned char var_54 = (unsigned char)36;
_Bool var_55 = (_Bool)0;
unsigned short var_56 = (unsigned short)4349;
long long int var_57 = -2503139665206065596LL;
unsigned int var_58 = 1913888982U;
unsigned char var_59 = (unsigned char)205;
unsigned char arr_2 [12] ;
_Bool arr_6 [12] [12] [12] [12] ;
_Bool arr_7 [12] [12] [12] ;
unsigned short arr_8 [12] [12] ;
unsigned char arr_9 [12] [12] [12] ;
unsigned int arr_12 [12] [12] [12] ;
int arr_13 [12] ;
unsigned short arr_14 [12] ;
unsigned short arr_16 [12] [12] [12] [12] ;
unsigned char arr_17 [12] [12] [12] [12] ;
long long int arr_18 [12] ;
unsigned short arr_19 [12] [12] [12] ;
unsigned char arr_22 [12] ;
short arr_23 [12] [12] [12] [12] ;
_Bool arr_26 [12] [12] [12] [12] [12] ;
int arr_29 [12] [12] [12] [12] ;
unsigned char arr_34 [12] ;
unsigned char arr_43 [12] [12] [12] [12] [12] [12] ;
signed char arr_44 [12] [12] [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)25916;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2143450773U : 2551761676U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = 2018820355;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = (unsigned short)621;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned short)33966;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = 3512612165831347484LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned short)16966;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (short)-10923;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = 1710026598;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? (unsigned char)171 : (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)-62;
}

void checksum() {
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
