#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14828;
unsigned int var_2 = 1670960940U;
unsigned long long int var_3 = 7810079482991471899ULL;
signed char var_4 = (signed char)-121;
unsigned long long int var_5 = 1469298116731289256ULL;
long long int var_6 = -8349144190976190524LL;
_Bool var_7 = (_Bool)0;
short var_8 = (short)25169;
long long int var_9 = 2979670452922314929LL;
unsigned short var_10 = (unsigned short)45596;
unsigned short var_11 = (unsigned short)13716;
unsigned short var_12 = (unsigned short)35392;
long long int var_13 = -4273706414974694482LL;
unsigned int var_14 = 1309854889U;
unsigned long long int var_15 = 17457747301660242298ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)206;
long long int var_19 = 7882430739288234520LL;
short var_20 = (short)24543;
unsigned int var_21 = 3399799885U;
int var_22 = 1553329153;
unsigned long long int var_23 = 7884392426034345815ULL;
unsigned int var_24 = 2527239521U;
int var_25 = 1692595648;
unsigned short var_26 = (unsigned short)64250;
_Bool var_27 = (_Bool)1;
short var_28 = (short)-18267;
unsigned short var_29 = (unsigned short)21672;
long long int var_30 = 3195600305054265852LL;
signed char var_31 = (signed char)66;
long long int var_32 = -5946484027468551399LL;
signed char arr_0 [25] ;
unsigned long long int arr_1 [25] ;
unsigned int arr_3 [25] [25] ;
unsigned char arr_4 [25] ;
_Bool arr_5 [25] [25] [25] ;
long long int arr_6 [25] [25] [25] ;
unsigned short arr_7 [25] [25] [25] [25] ;
unsigned char arr_8 [25] [25] ;
unsigned int arr_9 [25] [25] [25] [25] ;
_Bool arr_10 [25] ;
unsigned int arr_12 [24] ;
int arr_13 [24] ;
short arr_11 [25] [25] [25] [25] ;
short arr_24 [10] [10] ;
unsigned char arr_27 [10] [10] ;
long long int arr_32 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-20 : (signed char)-30;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 10611983782320529722ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 189378588U : 1353391752U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)55 : (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2668343182498116001LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)7225 : (unsigned short)33975;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)145 : (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1869100501U : 3535565249U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = 2345903170U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = 1069709595;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-21861 : (short)-29149;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_24 [i_0] [i_1] = (short)32557;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_32 [i_0] = 911675484742715979LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_32 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
