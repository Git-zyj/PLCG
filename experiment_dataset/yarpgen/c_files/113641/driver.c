#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9710568415067763094ULL;
unsigned long long int var_1 = 4388196520802432809ULL;
short var_3 = (short)10734;
short var_7 = (short)18408;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)36647;
short var_11 = (short)19888;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_16 = (short)-2617;
unsigned long long int var_17 = 7864637189582535419ULL;
long long int var_18 = -825511271407799699LL;
unsigned char var_19 = (unsigned char)0;
unsigned int var_20 = 2879871488U;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1798816778U;
unsigned short var_23 = (unsigned short)15967;
unsigned char var_24 = (unsigned char)228;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)230;
int var_27 = 89149285;
unsigned int var_28 = 2298369976U;
short var_29 = (short)-17086;
short var_30 = (short)-14811;
unsigned char var_31 = (unsigned char)173;
short var_32 = (short)-26522;
_Bool var_33 = (_Bool)1;
signed char var_34 = (signed char)-124;
unsigned char var_35 = (unsigned char)145;
_Bool var_36 = (_Bool)1;
unsigned char var_37 = (unsigned char)182;
unsigned long long int var_38 = 3323822284359189448ULL;
_Bool var_39 = (_Bool)1;
unsigned short var_40 = (unsigned short)48192;
unsigned short var_41 = (unsigned short)4110;
unsigned char var_42 = (unsigned char)133;
unsigned long long int var_43 = 15965583929987471213ULL;
unsigned char var_44 = (unsigned char)31;
unsigned int var_45 = 293695368U;
unsigned long long int var_46 = 8596018474315989489ULL;
short var_47 = (short)-601;
signed char var_48 = (signed char)6;
signed char var_49 = (signed char)64;
signed char var_50 = (signed char)79;
_Bool var_51 = (_Bool)0;
long long int var_52 = -4301124741422252495LL;
short var_53 = (short)-32355;
unsigned int var_54 = 3838773221U;
unsigned short var_55 = (unsigned short)10490;
unsigned long long int var_56 = 15968367942008766862ULL;
unsigned long long int var_57 = 11183339542178451376ULL;
signed char var_58 = (signed char)42;
unsigned long long int arr_0 [25] ;
long long int arr_1 [25] [25] ;
unsigned short arr_2 [25] [25] ;
long long int arr_3 [25] ;
int arr_4 [25] [25] [25] [25] ;
_Bool arr_6 [25] [25] [25] ;
unsigned char arr_7 [25] [25] [25] [25] [25] ;
unsigned int arr_8 [25] [25] [25] [25] [25] [25] ;
signed char arr_9 [25] [25] ;
unsigned short arr_10 [25] [25] [25] ;
long long int arr_11 [25] [25] [25] ;
long long int arr_13 [25] [25] [25] [25] [25] [25] ;
long long int arr_14 [18] [18] ;
unsigned short arr_15 [18] ;
int arr_16 [18] ;
unsigned long long int arr_17 [18] [18] ;
unsigned char arr_20 [18] [18] ;
signed char arr_21 [18] ;
unsigned long long int arr_24 [18] [18] [18] ;
unsigned int arr_26 [18] [18] [18] [18] [18] [18] ;
int arr_28 [18] [18] [18] ;
_Bool arr_30 [18] [18] ;
unsigned long long int arr_32 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 11089593699744128384ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = -4926449447227216565LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)28635;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 2346988003477399793LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 1057703445;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1363777843U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)64523;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 2158452996029081019LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -9080704882874559999LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = 707452720835153074LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (unsigned short)43957;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = 511225900;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_17 [i_0] [i_1] = 12625846070423403892ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 7662707366862420975ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2691693427U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = -1448054747;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_30 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_32 [i_0] = 12217690486433914663ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
