#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-32;
signed char var_2 = (signed char)-125;
unsigned short var_3 = (unsigned short)23165;
unsigned short var_4 = (unsigned short)18365;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int var_8 = 1804059165;
signed char var_9 = (signed char)52;
unsigned int var_10 = 2885593197U;
signed char var_12 = (signed char)22;
unsigned int var_13 = 4248640053U;
signed char var_14 = (signed char)107;
short var_15 = (short)20792;
unsigned int var_16 = 2623293785U;
signed char var_17 = (signed char)122;
unsigned short var_18 = (unsigned short)8003;
int zero = 0;
unsigned short var_20 = (unsigned short)51596;
unsigned short var_21 = (unsigned short)44288;
unsigned int var_22 = 4245987726U;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)-83;
signed char var_25 = (signed char)101;
unsigned char var_26 = (unsigned char)217;
unsigned short var_27 = (unsigned short)55596;
unsigned long long int var_28 = 3702774285356108610ULL;
unsigned short var_29 = (unsigned short)46064;
int var_30 = 1968600753;
short var_31 = (short)32124;
int var_32 = -547581728;
int var_33 = 2119270032;
signed char var_34 = (signed char)123;
signed char var_35 = (signed char)-24;
unsigned long long int var_36 = 4147279663721558100ULL;
signed char var_37 = (signed char)-92;
_Bool var_38 = (_Bool)1;
_Bool var_39 = (_Bool)1;
long long int var_40 = 1424711735985046005LL;
unsigned int var_41 = 4214160294U;
unsigned long long int var_42 = 18350537450757067812ULL;
long long int var_43 = 1200176832429826058LL;
unsigned int var_44 = 1994855058U;
long long int var_45 = 8678066000831202095LL;
signed char var_46 = (signed char)90;
unsigned int var_47 = 3318800940U;
short var_48 = (short)2006;
long long int var_49 = 5802969436297228945LL;
signed char var_50 = (signed char)34;
long long int var_51 = 6074342291458333226LL;
signed char var_52 = (signed char)4;
unsigned int var_53 = 3592966348U;
long long int var_54 = -2479065013602987483LL;
unsigned short arr_0 [25] ;
unsigned short arr_1 [25] [25] ;
short arr_2 [25] [25] [25] ;
signed char arr_4 [25] [25] ;
unsigned long long int arr_9 [25] [25] [25] [25] [25] ;
unsigned short arr_11 [25] [25] [25] [25] ;
int arr_15 [25] ;
_Bool arr_16 [25] [25] [25] ;
unsigned int arr_17 [25] [25] [25] ;
signed char arr_19 [25] [25] [25] [25] [25] ;
unsigned short arr_20 [25] [25] [25] [25] [25] [25] ;
signed char arr_23 [25] [25] [25] [25] [25] [25] [25] ;
short arr_27 [25] [25] [25] [25] [25] [25] ;
unsigned long long int arr_34 [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)38362;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)22313;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)-7324;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)53;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = 13306316911144260384ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned short)34821;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = -2099344886;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 2948939364U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)31824;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)26028;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = 13000211095734307723ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
