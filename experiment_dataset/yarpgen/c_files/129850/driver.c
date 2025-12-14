#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64606;
signed char var_1 = (signed char)-20;
unsigned long long int var_2 = 17515669305497061889ULL;
unsigned long long int var_3 = 15186802233226543593ULL;
unsigned long long int var_6 = 6707683114440038277ULL;
unsigned char var_7 = (unsigned char)107;
unsigned int var_9 = 3927843668U;
unsigned char var_10 = (unsigned char)201;
int var_12 = 28920251;
int zero = 0;
unsigned char var_14 = (unsigned char)129;
signed char var_15 = (signed char)4;
long long int var_16 = -3179364464098332939LL;
unsigned short var_17 = (unsigned short)38418;
_Bool var_18 = (_Bool)0;
long long int var_19 = -4809526634698111085LL;
int var_20 = 1598967443;
unsigned char var_21 = (unsigned char)41;
unsigned long long int var_22 = 8357439117308451714ULL;
int var_23 = -1264607120;
unsigned int arr_0 [14] [14] ;
short arr_7 [14] [14] [14] ;
unsigned short arr_15 [23] ;
unsigned long long int arr_17 [23] ;
unsigned short arr_18 [23] [23] ;
unsigned int arr_11 [14] [14] [14] [14] ;
unsigned long long int arr_14 [14] ;
unsigned char arr_19 [23] ;
short arr_22 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 471891391U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)16735;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (unsigned short)36603;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = 9326253108929773549ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)30713;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 1596664646U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = 211612638851425186ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = (short)26765;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
