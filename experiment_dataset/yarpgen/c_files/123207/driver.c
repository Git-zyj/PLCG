#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28730;
unsigned char var_1 = (unsigned char)132;
unsigned long long int var_2 = 14755121212610868966ULL;
short var_3 = (short)11958;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)58;
long long int var_7 = 701013677177406271LL;
unsigned int var_8 = 144942061U;
unsigned long long int var_9 = 14080226301135248580ULL;
unsigned char var_10 = (unsigned char)147;
unsigned int var_11 = 3606612071U;
long long int var_12 = 3556713863316322787LL;
unsigned long long int var_13 = 13357246626324557725ULL;
unsigned short var_14 = (unsigned short)8855;
int zero = 0;
unsigned short var_15 = (unsigned short)52372;
unsigned short var_16 = (unsigned short)40632;
short var_17 = (short)21476;
unsigned long long int var_18 = 4551286246751053661ULL;
unsigned char var_19 = (unsigned char)148;
long long int var_20 = 6566403369697971902LL;
short var_21 = (short)11696;
unsigned long long int var_22 = 18058130876779343075ULL;
signed char var_23 = (signed char)24;
unsigned short var_24 = (unsigned short)23656;
long long int var_25 = -7006025162103445669LL;
unsigned long long int var_26 = 8670076932781578565ULL;
int var_27 = -214121217;
short var_28 = (short)-27633;
unsigned char var_29 = (unsigned char)242;
unsigned char var_30 = (unsigned char)208;
signed char var_31 = (signed char)-14;
long long int var_32 = -6032758908978255214LL;
unsigned int var_33 = 2048941140U;
int var_34 = 711739283;
int var_35 = 1824615592;
unsigned short var_36 = (unsigned short)34550;
unsigned char var_37 = (unsigned char)91;
signed char var_38 = (signed char)11;
_Bool var_39 = (_Bool)0;
signed char var_40 = (signed char)-62;
unsigned long long int arr_5 [10] [10] ;
short arr_9 [10] [10] ;
long long int arr_15 [10] [10] [10] ;
short arr_23 [10] [10] ;
long long int arr_26 [10] ;
unsigned char arr_37 [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 10407180171541807868ULL : 9910279164073779543ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)8867 : (short)18185;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1840308133523232389LL : 3118274868159840575LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)15685 : (short)-4931;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? 8523581196585607034LL : -4676786198597096156LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)215 : (unsigned char)127;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
