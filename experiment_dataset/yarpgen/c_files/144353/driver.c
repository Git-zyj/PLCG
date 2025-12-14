#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14123543890759406682ULL;
long long int var_1 = 7061722537869607740LL;
unsigned char var_2 = (unsigned char)84;
unsigned short var_3 = (unsigned short)42159;
int var_4 = 687657812;
long long int var_5 = 4050886302613021659LL;
short var_6 = (short)3920;
unsigned long long int var_7 = 2885646151370676919ULL;
int var_8 = -1206945790;
unsigned int var_9 = 2478695378U;
unsigned char var_10 = (unsigned char)229;
unsigned int var_11 = 3968590432U;
unsigned int var_12 = 3250928396U;
_Bool var_13 = (_Bool)0;
short var_14 = (short)26456;
unsigned char var_15 = (unsigned char)167;
int zero = 0;
unsigned int var_16 = 4013395823U;
unsigned long long int var_17 = 5528609372282291673ULL;
long long int var_18 = 3794744019710516925LL;
unsigned short var_19 = (unsigned short)63744;
long long int var_20 = -3208129584128912562LL;
unsigned short var_21 = (unsigned short)5388;
unsigned char var_22 = (unsigned char)160;
unsigned short var_23 = (unsigned short)41276;
_Bool var_24 = (_Bool)0;
unsigned long long int arr_0 [13] ;
unsigned short arr_1 [13] ;
unsigned long long int arr_3 [18] ;
long long int arr_4 [18] [18] ;
long long int arr_5 [18] [18] ;
unsigned long long int arr_7 [18] [18] ;
unsigned int arr_8 [18] [18] [18] ;
unsigned short arr_9 [18] [18] [18] [18] ;
unsigned long long int arr_10 [18] [18] [18] [18] ;
unsigned char arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 5073529919991116287ULL : 9704331593452005704ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20971 : (unsigned short)52614;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 5019690233504102767ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = -7721404642110823625LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = -2976251697399871456LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 8877974703929326118ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 611167639U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)11018;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 6059813791558634727ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)137 : (unsigned char)168;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
