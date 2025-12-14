#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2081406285;
short var_3 = (short)4360;
unsigned long long int var_4 = 13964042549840027119ULL;
short var_5 = (short)28272;
unsigned char var_6 = (unsigned char)107;
short var_7 = (short)-26421;
int var_8 = -683608996;
unsigned long long int var_10 = 14087677411310784558ULL;
short var_11 = (short)-17437;
unsigned short var_13 = (unsigned short)16800;
int var_14 = 670871452;
int var_15 = -1395796349;
unsigned long long int var_16 = 16322409478219018500ULL;
unsigned char var_17 = (unsigned char)142;
int zero = 0;
unsigned char var_18 = (unsigned char)41;
unsigned long long int var_19 = 16061289572318503001ULL;
unsigned short var_20 = (unsigned short)29873;
unsigned long long int var_21 = 6086093311751916596ULL;
signed char var_22 = (signed char)-76;
short var_23 = (short)-17660;
unsigned char var_24 = (unsigned char)219;
long long int var_25 = 3206551152098917691LL;
_Bool var_26 = (_Bool)0;
unsigned char var_27 = (unsigned char)132;
int arr_0 [23] ;
int arr_1 [23] ;
unsigned char arr_2 [23] [23] ;
unsigned int arr_3 [23] ;
unsigned char arr_4 [23] ;
int arr_5 [23] [23] ;
unsigned short arr_7 [23] ;
unsigned char arr_12 [23] [23] [23] ;
unsigned char arr_13 [23] ;
unsigned long long int arr_19 [21] ;
long long int arr_8 [23] [23] ;
long long int arr_9 [23] [23] [23] ;
unsigned int arr_14 [23] [23] ;
unsigned long long int arr_15 [23] ;
unsigned char arr_18 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1944769483 : -615668755;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -958548245 : 1625441019;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 3916741757U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 1495926011;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned short)20117;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)167 : (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned char)175 : (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = 17074318326197777936ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? -6871008848249470511LL : -4293293384459478549LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4442180476443640330LL : 4321115475647743720LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 2892632492U : 929336097U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 10357590367776533627ULL : 15364602107378870694ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (unsigned char)165;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
