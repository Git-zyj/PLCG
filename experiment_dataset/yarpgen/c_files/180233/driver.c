#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 371192496218732134ULL;
short var_2 = (short)17448;
signed char var_3 = (signed char)-86;
int var_6 = -1137987993;
unsigned long long int var_7 = 7652232141721881104ULL;
long long int var_8 = 4308395695875666257LL;
signed char var_9 = (signed char)73;
signed char var_11 = (signed char)49;
unsigned char var_12 = (unsigned char)68;
int var_13 = 301361944;
signed char var_14 = (signed char)-80;
_Bool var_15 = (_Bool)1;
int var_16 = -934339961;
signed char var_17 = (signed char)-63;
signed char var_18 = (signed char)-10;
int zero = 0;
long long int var_19 = -1582136442605178496LL;
int var_20 = 2108651441;
unsigned char var_21 = (unsigned char)220;
signed char var_22 = (signed char)-110;
unsigned char var_23 = (unsigned char)23;
signed char var_24 = (signed char)112;
signed char var_25 = (signed char)-91;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 2878931486U;
signed char var_28 = (signed char)87;
long long int var_29 = 1159710902150760547LL;
_Bool var_30 = (_Bool)1;
int var_31 = 816250698;
long long int var_32 = 5203251630555222223LL;
_Bool var_33 = (_Bool)0;
_Bool var_34 = (_Bool)1;
unsigned short var_35 = (unsigned short)60524;
long long int var_36 = 412390623612505353LL;
unsigned short var_37 = (unsigned short)53947;
short var_38 = (short)15435;
unsigned char arr_0 [25] ;
_Bool arr_1 [25] ;
long long int arr_2 [25] ;
int arr_3 [20] ;
int arr_4 [20] ;
signed char arr_5 [20] [20] [20] ;
unsigned char arr_6 [20] [20] [20] ;
unsigned long long int arr_8 [20] ;
unsigned long long int arr_9 [20] [20] [20] ;
unsigned long long int arr_10 [20] ;
unsigned long long int arr_12 [20] [20] ;
unsigned long long int arr_13 [20] [20] [20] ;
int arr_14 [20] [20] [20] ;
unsigned int arr_15 [20] [20] [20] [20] ;
long long int arr_22 [15] [15] ;
int arr_23 [15] ;
long long int arr_25 [15] [15] ;
signed char arr_30 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -3721081858593953058LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -955512556;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 1029034368;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 14912297054331094688ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 9863569803663935116ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = 3192629865671713111ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = 12358386109732059270ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 17808407191728282949ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 1876413990;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 2508196240U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_22 [i_0] [i_1] = -229272703008692672LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = 553522790;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_25 [i_0] [i_1] = -1226113687089489185LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (signed char)40;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
