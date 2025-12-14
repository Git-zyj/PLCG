#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15013;
unsigned char var_2 = (unsigned char)51;
unsigned long long int var_3 = 17684407929013786652ULL;
unsigned short var_4 = (unsigned short)63752;
signed char var_5 = (signed char)-81;
unsigned long long int var_6 = 12008405517222506219ULL;
unsigned int var_7 = 2000359510U;
unsigned int var_8 = 306663465U;
long long int var_9 = -2326546116773561308LL;
int var_10 = -935612819;
int zero = 0;
unsigned char var_11 = (unsigned char)230;
int var_12 = 505590214;
unsigned char var_13 = (unsigned char)97;
unsigned short var_14 = (unsigned short)65112;
unsigned char var_15 = (unsigned char)30;
unsigned int var_16 = 3006367426U;
short var_17 = (short)-6216;
unsigned short var_18 = (unsigned short)30188;
int var_19 = -912190546;
_Bool var_20 = (_Bool)1;
unsigned long long int arr_0 [25] ;
int arr_1 [25] ;
unsigned int arr_2 [25] [25] ;
unsigned long long int arr_3 [25] ;
unsigned short arr_7 [25] ;
unsigned int arr_8 [25] ;
unsigned char arr_9 [25] [25] ;
signed char arr_15 [21] ;
unsigned char arr_4 [25] [25] ;
unsigned long long int arr_11 [25] [25] [25] ;
unsigned short arr_18 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 14781222390062215208ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 1663259086;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 876618883U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 11145348833937846328ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (unsigned short)60193;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 4174073670U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (signed char)44 : (signed char)-44;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 1482755630028410515ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (unsigned short)55737 : (unsigned short)32101;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
