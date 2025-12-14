#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)177;
unsigned long long int var_1 = 6210271907853123227ULL;
unsigned long long int var_2 = 17151210769005739054ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 14531444333765651708ULL;
unsigned int var_6 = 473489069U;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 13095582319709603287ULL;
unsigned long long int var_9 = 10279028172643652621ULL;
long long int var_10 = 8149205387790399918LL;
unsigned short var_11 = (unsigned short)62277;
unsigned long long int var_12 = 5209868648851826762ULL;
int zero = 0;
unsigned long long int var_13 = 8803888136520072790ULL;
unsigned int var_14 = 1179825205U;
unsigned long long int var_15 = 849676456364898821ULL;
long long int var_16 = 8927778832104997935LL;
unsigned int var_17 = 626399667U;
unsigned short var_18 = (unsigned short)63804;
signed char arr_0 [16] ;
short arr_1 [16] [16] ;
_Bool arr_2 [16] ;
unsigned long long int arr_3 [16] ;
unsigned short arr_7 [16] [16] ;
long long int arr_8 [16] ;
unsigned long long int arr_10 [16] [16] ;
signed char arr_11 [16] ;
long long int arr_15 [12] ;
unsigned long long int arr_18 [21] [21] ;
unsigned long long int arr_19 [21] ;
short arr_4 [16] ;
unsigned long long int arr_5 [16] ;
unsigned int arr_9 [16] ;
_Bool arr_12 [16] [16] [16] ;
_Bool arr_13 [16] ;
signed char arr_16 [12] ;
long long int arr_17 [12] ;
unsigned char arr_20 [21] [21] ;
unsigned short arr_21 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (short)32693;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 14299223086081628723ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)59756;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 2861642531549397585LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = 8412950896763716817ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = -7081012395811578486LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_18 [i_0] [i_1] = 14913362945572287412ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = 10373828606663856283ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)22667;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 5956170171619531958ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 1263620054U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = 6806278591693385919LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = (unsigned short)47264;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
