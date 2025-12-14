#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19198;
short var_1 = (short)831;
unsigned int var_2 = 696395401U;
unsigned int var_6 = 761563701U;
unsigned char var_9 = (unsigned char)211;
int zero = 0;
short var_14 = (short)16573;
short var_15 = (short)32689;
unsigned long long int var_16 = 12194537714258476570ULL;
unsigned long long int var_17 = 14744587410816098090ULL;
int var_18 = 807645964;
unsigned long long int var_19 = 9259922274734236292ULL;
long long int var_20 = 5914969288604053033LL;
unsigned long long int arr_0 [11] [11] ;
short arr_1 [11] ;
short arr_3 [11] [11] ;
unsigned long long int arr_5 [18] ;
int arr_6 [18] ;
unsigned int arr_11 [18] [18] ;
short arr_4 [11] ;
short arr_9 [18] [18] ;
short arr_14 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 8525590350832900673ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)21192;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (short)30607;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 11482694069716408475ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 514955296;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = 3911663051U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)-5572;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-24289;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-30163 : (short)-26375;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
