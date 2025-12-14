#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4695855886646622812LL;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
int var_8 = 1267226853;
unsigned long long int var_9 = 9596796825969326813ULL;
unsigned int var_10 = 3510621727U;
long long int var_11 = 2421938398565504804LL;
int zero = 0;
unsigned long long int var_13 = 15740202091469366012ULL;
unsigned int var_14 = 3537978684U;
short var_15 = (short)-20037;
unsigned int var_16 = 3117521613U;
unsigned long long int var_17 = 1153715310909301658ULL;
signed char var_18 = (signed char)-106;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)49;
unsigned char var_21 = (unsigned char)92;
unsigned int var_22 = 2852009747U;
unsigned int var_23 = 2519925471U;
_Bool var_24 = (_Bool)0;
unsigned int var_25 = 2060158732U;
int var_26 = 1989584399;
unsigned char var_27 = (unsigned char)180;
_Bool var_28 = (_Bool)0;
unsigned long long int var_29 = 10603980877392533409ULL;
unsigned short var_30 = (unsigned short)2913;
long long int var_31 = 4443552603273708484LL;
unsigned int var_32 = 4001258359U;
unsigned int var_33 = 336744077U;
int var_34 = 2086079948;
unsigned long long int var_35 = 14540143627059398550ULL;
unsigned int var_36 = 13416143U;
long long int var_37 = -1775669515594049284LL;
unsigned long long int var_38 = 9126614916719020248ULL;
unsigned long long int var_39 = 4032013662827617222ULL;
int var_40 = 303495384;
long long int var_41 = -7318715741959714829LL;
unsigned long long int var_42 = 12515779213084600538ULL;
unsigned short var_43 = (unsigned short)59399;
unsigned int var_44 = 1235832149U;
unsigned int var_45 = 2559521967U;
int var_46 = -1908822893;
int var_47 = -782701208;
unsigned int var_48 = 695865763U;
unsigned long long int var_49 = 13531513003631587850ULL;
unsigned long long int var_50 = 8319853414747951394ULL;
_Bool var_51 = (_Bool)0;
unsigned int var_52 = 104669964U;
unsigned long long int var_53 = 14313129249396972010ULL;
short var_54 = (short)31313;
unsigned int var_55 = 1298107887U;
unsigned char arr_0 [16] ;
int arr_1 [16] ;
_Bool arr_2 [16] ;
unsigned char arr_3 [16] ;
unsigned long long int arr_5 [16] [16] ;
signed char arr_6 [16] ;
int arr_7 [16] [16] [16] ;
unsigned long long int arr_9 [16] ;
unsigned long long int arr_10 [16] [16] [16] ;
short arr_12 [16] [16] [16] [16] ;
unsigned int arr_13 [16] [16] [16] ;
unsigned long long int arr_14 [16] [16] [16] [16] ;
unsigned int arr_15 [16] [16] [16] [16] ;
unsigned long long int arr_16 [16] [16] ;
unsigned int arr_17 [16] [16] [16] [16] ;
int arr_20 [16] [16] [16] ;
unsigned long long int arr_21 [16] [16] [16] ;
int arr_35 [16] [16] [16] ;
unsigned long long int arr_36 [16] [16] [16] [16] ;
unsigned int arr_48 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 2141598513;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 14073148512821099767ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1649600013 : 1132390901;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 17190107755877540809ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 13423708122485149405ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (short)19633;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 316140665U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 3362519232780360974ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 284248081U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = 11843515752883380749ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 2944192264U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = -1249783730;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 2813049154744325041ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = 473574226;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = 3589761912379805069ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = 1188484254U;
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
    hash(&seed, var_54);
    hash(&seed, var_55);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
