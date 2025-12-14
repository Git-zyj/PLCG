#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)132;
long long int var_2 = 5408779272155460798LL;
signed char var_3 = (signed char)111;
int var_5 = -352232075;
unsigned int var_6 = 1875227815U;
unsigned long long int var_7 = 11688996914840403440ULL;
unsigned short var_8 = (unsigned short)58728;
unsigned short var_9 = (unsigned short)59391;
short var_10 = (short)-1187;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 11105125539837184627ULL;
int zero = 0;
unsigned int var_13 = 1802547113U;
long long int var_14 = 5659659148381373698LL;
short var_15 = (short)-28647;
unsigned short var_16 = (unsigned short)24995;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-41;
unsigned long long int var_19 = 15058648395246664863ULL;
unsigned int var_20 = 330545404U;
long long int var_21 = 6204408342893151103LL;
signed char var_22 = (signed char)-19;
unsigned int var_23 = 31896210U;
short var_24 = (short)3623;
unsigned int var_25 = 3448202786U;
short var_26 = (short)-5466;
_Bool var_27 = (_Bool)1;
short var_28 = (short)12836;
long long int var_29 = 1403654459402709902LL;
unsigned int var_30 = 1279331520U;
short var_31 = (short)-16247;
unsigned char var_32 = (unsigned char)0;
signed char var_33 = (signed char)-95;
unsigned short var_34 = (unsigned short)39826;
long long int var_35 = -6851550272375257337LL;
unsigned char var_36 = (unsigned char)187;
unsigned int var_37 = 698365674U;
signed char var_38 = (signed char)-120;
short var_39 = (short)6839;
long long int var_40 = 2533268869338211851LL;
unsigned short var_41 = (unsigned short)37128;
int var_42 = -1320551314;
unsigned short var_43 = (unsigned short)15487;
unsigned long long int var_44 = 890309196340435372ULL;
unsigned long long int var_45 = 966631277246278185ULL;
short var_46 = (short)-11212;
unsigned int var_47 = 1455655215U;
signed char var_48 = (signed char)-25;
unsigned int var_49 = 1013013473U;
signed char var_50 = (signed char)-121;
_Bool var_51 = (_Bool)1;
unsigned int var_52 = 1082171940U;
signed char var_53 = (signed char)14;
unsigned short arr_0 [17] ;
short arr_4 [17] [17] [17] ;
unsigned short arr_5 [17] [17] [17] ;
int arr_9 [25] ;
unsigned short arr_10 [25] ;
long long int arr_11 [25] ;
unsigned long long int arr_12 [25] [25] ;
long long int arr_13 [25] [25] [25] ;
unsigned char arr_14 [25] [25] ;
unsigned short arr_15 [25] [25] ;
unsigned char arr_16 [25] ;
unsigned long long int arr_17 [25] [25] [25] ;
int arr_18 [25] [25] [25] ;
unsigned char arr_19 [25] [25] ;
int arr_21 [25] [25] [25] [25] ;
short arr_26 [25] [25] [25] ;
unsigned long long int arr_31 [25] [25] [25] [25] [25] ;
unsigned short arr_33 [25] [25] [25] [25] [25] [25] ;
unsigned int arr_37 [25] [25] [25] ;
unsigned short arr_38 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)17004;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-12619;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)28292;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = -1529388518;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (unsigned short)45257;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = -7621110539647201291LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = 695523857965575740ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -6586705551250124061LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)42371;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 5072620725492445760ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 1989787942;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = -1595954162;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (short)-29978;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = 11935338550267150688ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)60221;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = 1459627676U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_38 [i_0] = (unsigned short)3742;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
