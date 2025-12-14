#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)55;
unsigned int var_3 = 554339820U;
unsigned short var_7 = (unsigned short)38504;
signed char var_9 = (signed char)-119;
long long int var_12 = -7121023689882753066LL;
unsigned int var_15 = 2808972577U;
long long int var_16 = 1374188295772169463LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)61382;
long long int var_19 = -7638902816052309036LL;
int var_20 = 579872662;
signed char var_21 = (signed char)97;
unsigned short var_22 = (unsigned short)7450;
unsigned long long int var_23 = 17015508276749841421ULL;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)83;
_Bool var_26 = (_Bool)0;
unsigned char var_27 = (unsigned char)46;
unsigned int var_28 = 1493563735U;
unsigned short var_29 = (unsigned short)12654;
unsigned int var_30 = 3325739525U;
unsigned int var_31 = 2196282409U;
_Bool var_32 = (_Bool)0;
unsigned char var_33 = (unsigned char)112;
_Bool var_34 = (_Bool)1;
unsigned short arr_0 [14] ;
long long int arr_2 [24] [24] ;
unsigned short arr_3 [24] [24] ;
int arr_9 [14] [14] ;
unsigned short arr_12 [14] [14] ;
long long int arr_13 [14] ;
long long int arr_16 [14] [14] ;
signed char arr_21 [12] ;
signed char arr_14 [14] [14] ;
unsigned short arr_18 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)16014;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 200082307242889895LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)57200 : (unsigned short)28488;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = -1925405478;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)9114;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = 1238784544149270357LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_16 [i_0] [i_1] = 2122105798699321561LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned short)43153;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
