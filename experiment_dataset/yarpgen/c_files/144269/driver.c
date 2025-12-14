#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-119;
unsigned int var_1 = 4101457565U;
unsigned int var_2 = 1324107699U;
long long int var_3 = -6515408813183930393LL;
long long int var_4 = 5238659336955514699LL;
unsigned long long int var_5 = 3482427416252087508ULL;
unsigned long long int var_6 = 11755162792623106024ULL;
unsigned int var_7 = 1236802562U;
int var_8 = -1241732993;
int var_9 = 1201451745;
int zero = 0;
signed char var_11 = (signed char)76;
unsigned char var_12 = (unsigned char)92;
long long int var_13 = 331656384325382774LL;
unsigned char var_14 = (unsigned char)21;
long long int var_15 = -156283515773891016LL;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
long long int var_18 = -3772142619760861802LL;
unsigned long long int var_19 = 13120442037088882471ULL;
long long int var_20 = 2240451424208720542LL;
unsigned short var_21 = (unsigned short)34858;
unsigned long long int var_22 = 730102630412603524ULL;
unsigned long long int var_23 = 14076493465261037848ULL;
int var_24 = -1776863824;
long long int var_25 = -1140791139115078021LL;
_Bool var_26 = (_Bool)1;
long long int var_27 = -2167578639415105259LL;
long long int var_28 = 6148433360064734452LL;
long long int var_29 = 8686287312240368786LL;
int var_30 = 550331908;
unsigned char arr_0 [23] ;
unsigned short arr_1 [23] ;
long long int arr_2 [23] ;
unsigned short arr_4 [23] [23] [23] [23] ;
unsigned short arr_5 [23] ;
int arr_6 [23] [23] [23] ;
long long int arr_7 [23] [23] [23] ;
unsigned char arr_8 [23] [23] [23] [23] ;
_Bool arr_14 [18] [18] ;
int arr_15 [18] [18] ;
unsigned int arr_16 [18] [18] ;
int arr_18 [18] [18] ;
short arr_19 [18] [18] ;
signed char arr_23 [19] ;
unsigned short arr_25 [24] [24] ;
_Bool arr_26 [24] ;
unsigned short arr_27 [24] ;
long long int arr_30 [24] [24] [24] [24] ;
unsigned short arr_31 [24] [24] [24] ;
unsigned char arr_9 [23] ;
unsigned char arr_10 [23] [23] ;
short arr_24 [19] ;
_Bool arr_32 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)54648;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -3373413009263261800LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (unsigned short)42768;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)40;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 222264454;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -490617122139145226LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = 253440432;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = 2925931066U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = -2076472125;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)3829 : (short)-9030;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_25 [i_0] [i_1] = (unsigned short)43759;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_27 [i_0] = (unsigned short)45442;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = 6626169302161785441LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (unsigned short)27834;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)42 : (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = (short)22482;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
