#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -810793446;
unsigned int var_1 = 515260824U;
unsigned long long int var_8 = 12173483225510418038ULL;
unsigned int var_9 = 2258714886U;
unsigned long long int var_17 = 5873394500286388365ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)97;
unsigned long long int var_21 = 15069718945810381942ULL;
long long int var_22 = 8018693678196504164LL;
unsigned long long int var_23 = 3435302115857668264ULL;
unsigned long long int var_24 = 8053015481937040109ULL;
short var_25 = (short)26080;
long long int var_26 = -8032806317382409003LL;
short var_27 = (short)-6387;
long long int var_28 = 5177117873054418457LL;
unsigned char var_29 = (unsigned char)175;
int var_30 = -518710746;
unsigned long long int var_31 = 14510242723954422011ULL;
unsigned char var_32 = (unsigned char)147;
int arr_0 [13] ;
long long int arr_1 [13] ;
long long int arr_5 [13] ;
unsigned short arr_6 [20] ;
signed char arr_7 [20] ;
int arr_8 [20] [20] ;
unsigned int arr_9 [20] [20] ;
unsigned short arr_12 [16] [16] ;
long long int arr_2 [13] ;
int arr_10 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 490903462;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 4375379455988912752LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 2856535869419138073LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned short)8733;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = -1737053114;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = 3096347343U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)25639 : (unsigned short)17442;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -8746433693628479595LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = -2142258346;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
