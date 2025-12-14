#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-16259;
short var_6 = (short)17964;
long long int var_7 = 4299581349591623940LL;
signed char var_9 = (signed char)33;
int var_10 = 1197554144;
_Bool var_13 = (_Bool)0;
int var_14 = 2087525655;
short var_17 = (short)-5728;
int zero = 0;
int var_20 = 1445090879;
_Bool var_21 = (_Bool)0;
int var_22 = -1181771502;
int var_23 = -1459840863;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)103;
unsigned long long int var_26 = 13427128622445320335ULL;
unsigned int var_27 = 1433720946U;
unsigned char var_28 = (unsigned char)216;
_Bool var_29 = (_Bool)0;
unsigned short var_30 = (unsigned short)54133;
unsigned int var_31 = 1068045475U;
unsigned short var_32 = (unsigned short)56834;
unsigned int var_33 = 1406675167U;
unsigned int var_34 = 2004255183U;
unsigned int var_35 = 3691657656U;
_Bool var_36 = (_Bool)0;
unsigned int var_37 = 2800031768U;
int arr_0 [15] ;
unsigned long long int arr_1 [15] [15] ;
signed char arr_2 [10] ;
signed char arr_3 [10] ;
_Bool arr_6 [10] [10] ;
_Bool arr_13 [16] [16] ;
unsigned char arr_14 [16] ;
signed char arr_15 [16] [16] ;
unsigned int arr_18 [16] [16] [16] [16] ;
unsigned int arr_20 [24] [24] ;
unsigned short arr_21 [24] [24] ;
unsigned long long int arr_11 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1106629398;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 1639856572067821765ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 3929858771U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_20 [i_0] [i_1] = 3880302657U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned short)47578;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = 1814313534040937468ULL;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
