#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19208;
unsigned short var_3 = (unsigned short)55212;
int var_4 = -867672943;
int var_6 = -705914591;
signed char var_7 = (signed char)3;
long long int var_9 = 1648647684505022072LL;
long long int var_12 = -4326951042699694026LL;
long long int var_14 = -1134319602036950476LL;
unsigned char var_16 = (unsigned char)44;
short var_17 = (short)-24412;
unsigned short var_18 = (unsigned short)19693;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 310757431U;
unsigned long long int var_21 = 13510137264355160750ULL;
unsigned long long int var_22 = 6734563199966554079ULL;
unsigned long long int var_23 = 9570567330618807281ULL;
long long int var_24 = -8659204882365801165LL;
signed char var_25 = (signed char)66;
short var_26 = (short)16388;
signed char var_27 = (signed char)33;
unsigned long long int var_28 = 14563380973646591470ULL;
unsigned short var_29 = (unsigned short)59538;
signed char var_30 = (signed char)31;
unsigned int var_31 = 447172058U;
unsigned short var_32 = (unsigned short)59990;
signed char var_33 = (signed char)-50;
short arr_0 [11] ;
long long int arr_4 [11] [11] [11] ;
signed char arr_5 [11] ;
long long int arr_9 [11] [11] [11] [11] ;
unsigned char arr_15 [11] [11] ;
int arr_16 [11] [11] ;
signed char arr_19 [11] [11] ;
unsigned short arr_13 [11] [11] [11] [11] [11] ;
long long int arr_14 [11] ;
_Bool arr_18 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)-11540;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -3648911500314941448LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 7367216641196217873LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_16 [i_0] [i_1] = -328541336;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_19 [i_0] [i_1] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned short)28935 : (unsigned short)52181;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? -100317934595726443LL : 6839791730781927964LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
