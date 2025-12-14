#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11182898915788860752ULL;
unsigned long long int var_1 = 14604839424187954479ULL;
unsigned char var_2 = (unsigned char)172;
unsigned short var_3 = (unsigned short)6153;
unsigned int var_4 = 3611992166U;
unsigned char var_5 = (unsigned char)51;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)10630;
unsigned long long int var_9 = 17411497621363373737ULL;
unsigned short var_10 = (unsigned short)46275;
short var_13 = (short)-8802;
unsigned long long int var_14 = 14865810153839608654ULL;
unsigned short var_15 = (unsigned short)53916;
unsigned int var_16 = 2585697088U;
int zero = 0;
short var_17 = (short)-20829;
unsigned char var_18 = (unsigned char)180;
long long int var_19 = 8420638537404980964LL;
unsigned long long int var_20 = 17749600425482461793ULL;
signed char var_21 = (signed char)122;
unsigned char var_22 = (unsigned char)189;
unsigned char var_23 = (unsigned char)181;
signed char var_24 = (signed char)-15;
unsigned int var_25 = 1110533464U;
unsigned char var_26 = (unsigned char)48;
unsigned char var_27 = (unsigned char)19;
_Bool var_28 = (_Bool)0;
short var_29 = (short)5513;
unsigned char var_30 = (unsigned char)66;
signed char var_31 = (signed char)114;
int var_32 = -960325144;
unsigned char var_33 = (unsigned char)95;
unsigned int var_34 = 4001895833U;
unsigned short var_35 = (unsigned short)39690;
unsigned int var_36 = 595556685U;
unsigned char var_37 = (unsigned char)13;
unsigned int var_38 = 996661790U;
int var_39 = 442430859;
signed char var_40 = (signed char)-5;
int var_41 = -1584967149;
short arr_0 [18] ;
unsigned short arr_1 [18] ;
unsigned long long int arr_3 [23] ;
unsigned int arr_5 [23] ;
signed char arr_15 [10] [10] [10] ;
signed char arr_18 [10] [10] [10] [10] [10] ;
short arr_25 [10] [10] ;
unsigned short arr_28 [10] [10] [10] [10] ;
unsigned long long int arr_35 [16] ;
unsigned char arr_41 [16] ;
unsigned short arr_46 [16] ;
unsigned char arr_2 [18] ;
int arr_6 [23] ;
unsigned char arr_10 [10] [10] ;
unsigned int arr_22 [10] [10] [10] [10] ;
long long int arr_23 [10] [10] [10] [10] [10] ;
unsigned short arr_24 [10] [10] ;
signed char arr_30 [10] [10] [10] ;
unsigned char arr_33 [17] ;
unsigned long long int arr_36 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-23255;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)52656;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 18236314477774074732ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 2674668628U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_25 [i_0] [i_1] = (short)6560;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (unsigned short)27968;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_35 [i_0] = 7941361445261908706ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_41 [i_0] = (i_0 % 2 == 0) ? (unsigned char)173 : (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_46 [i_0] = (unsigned short)40968;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 2091572976;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 2671987329U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = 8396528523266074909LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned short)53909;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_33 [i_0] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_36 [i_0] = 9409827146416561332ULL;
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
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_36 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
