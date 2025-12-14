#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-23;
int zero = 0;
unsigned char var_12 = (unsigned char)76;
unsigned char var_13 = (unsigned char)155;
signed char var_14 = (signed char)-34;
unsigned long long int var_15 = 7237947421076465531ULL;
unsigned int var_16 = 2666663342U;
unsigned int var_17 = 3984835190U;
unsigned char var_18 = (unsigned char)237;
long long int var_19 = -7477009956025329027LL;
short var_20 = (short)13386;
unsigned long long int var_21 = 10744051041198569223ULL;
short var_22 = (short)-21067;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)182;
unsigned char var_25 = (unsigned char)164;
short var_26 = (short)7288;
unsigned short var_27 = (unsigned short)53547;
unsigned int var_28 = 2745490894U;
_Bool var_29 = (_Bool)1;
_Bool var_30 = (_Bool)1;
unsigned long long int var_31 = 3525717718315295883ULL;
int var_32 = 263220580;
int var_33 = 23848894;
unsigned long long int var_34 = 13032702586407641248ULL;
short var_35 = (short)29863;
unsigned char var_36 = (unsigned char)166;
unsigned long long int var_37 = 12013737819622839206ULL;
int var_38 = -392197582;
_Bool var_39 = (_Bool)1;
unsigned char var_40 = (unsigned char)173;
unsigned int var_41 = 1549032492U;
long long int var_42 = 9059908002306875664LL;
unsigned long long int var_43 = 4778690658872927317ULL;
unsigned long long int var_44 = 478906830529783960ULL;
unsigned long long int var_45 = 7640223618685274777ULL;
unsigned long long int var_46 = 4703725090367071056ULL;
short var_47 = (short)-26441;
unsigned long long int var_48 = 11692911045536536637ULL;
unsigned char var_49 = (unsigned char)28;
int var_50 = -2051372884;
_Bool var_51 = (_Bool)0;
signed char var_52 = (signed char)85;
_Bool var_53 = (_Bool)0;
_Bool var_54 = (_Bool)0;
unsigned char var_55 = (unsigned char)222;
unsigned short var_56 = (unsigned short)62057;
int var_57 = -114339962;
int var_58 = -257784235;
_Bool var_59 = (_Bool)0;
unsigned int var_60 = 2696830061U;
unsigned char var_61 = (unsigned char)252;
unsigned char arr_22 [20] [20] ;
short arr_29 [20] ;
_Bool arr_43 [20] [20] [20] [20] ;
signed char arr_52 [20] [20] [20] ;
unsigned int arr_73 [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_29 [i_0] = (short)-10784;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_52 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)121 : (signed char)11;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_73 [i_0] [i_1] [i_2] [i_3] [i_4] = 4100646357U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
    hash(&seed, var_60);
    hash(&seed, var_61);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_43 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_52 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        hash(&seed, arr_73 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
