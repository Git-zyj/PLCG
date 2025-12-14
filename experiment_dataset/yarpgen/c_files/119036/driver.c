#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23660;
unsigned int var_1 = 3500698364U;
short var_2 = (short)-25174;
short var_3 = (short)10484;
unsigned char var_4 = (unsigned char)85;
unsigned int var_6 = 2055740845U;
unsigned long long int var_7 = 17779126691486278381ULL;
long long int var_8 = 473284517417890618LL;
unsigned long long int var_9 = 12725397739222140285ULL;
unsigned short var_10 = (unsigned short)12633;
signed char var_11 = (signed char)18;
unsigned long long int var_12 = 2045914246901501995ULL;
int zero = 0;
long long int var_13 = 9102130814380868579LL;
unsigned long long int var_14 = 15271645088465329583ULL;
long long int var_15 = 8671058244266014464LL;
unsigned short var_16 = (unsigned short)44353;
short var_17 = (short)-20288;
unsigned char var_18 = (unsigned char)213;
short var_19 = (short)7959;
int var_20 = 343901118;
unsigned long long int var_21 = 16136659836199513701ULL;
unsigned char var_22 = (unsigned char)110;
signed char arr_0 [14] ;
unsigned int arr_4 [14] [14] [14] ;
short arr_5 [14] ;
unsigned int arr_12 [14] [14] [14] [14] ;
unsigned char arr_17 [22] ;
int arr_8 [14] ;
long long int arr_14 [14] [14] [14] [14] ;
long long int arr_18 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 930972803U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (short)22610;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 300912054U : 3140146973U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = -1680350785;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -2173578011428709507LL : -6299903196448783004LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_18 [i_0] [i_1] = -1359889725147907902LL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
