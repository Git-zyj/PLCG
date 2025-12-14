#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7511887691411669992LL;
unsigned short var_2 = (unsigned short)2935;
unsigned int var_5 = 2029080246U;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 13012874306273195146ULL;
int var_9 = 786255058;
unsigned short var_11 = (unsigned short)13106;
unsigned short var_12 = (unsigned short)58294;
int zero = 0;
long long int var_13 = 7229375925776729134LL;
int var_14 = 505958730;
unsigned char var_15 = (unsigned char)157;
long long int var_16 = -7232682430883710395LL;
unsigned char var_17 = (unsigned char)219;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 16566234556235151327ULL;
long long int var_20 = 3061928476289755386LL;
long long int var_21 = 894505490721106230LL;
unsigned long long int var_22 = 11445592571449720352ULL;
unsigned long long int var_23 = 5641614320162414591ULL;
unsigned int var_24 = 1026960381U;
long long int var_25 = -5255528618353523629LL;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 644834008U;
unsigned long long int arr_0 [23] [23] ;
long long int arr_1 [23] [23] ;
long long int arr_2 [19] ;
unsigned long long int arr_3 [19] ;
unsigned long long int arr_5 [19] [19] ;
long long int arr_9 [19] [19] ;
unsigned int arr_11 [19] [19] [19] ;
long long int arr_12 [19] [19] [19] [19] [19] ;
int arr_16 [19] [19] [19] [19] ;
unsigned short arr_20 [19] [19] [19] [19] [19] [19] [19] ;
int arr_6 [19] ;
int arr_7 [19] ;
long long int arr_15 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 819809785478374167ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = -6343303317486080506LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -7834410150508637110LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 13294738183729326297ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 13433716499384688249ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = 4992569215478292727LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 2301266031U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 1234279843392856901LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 880913587;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)40753;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 128213664 : -2038418001;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -605307182 : -441749664;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 3550265818820200614LL : -4535225312713811929LL;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
