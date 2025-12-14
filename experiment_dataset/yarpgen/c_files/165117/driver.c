#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)86;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 7518806986663362177ULL;
unsigned short var_6 = (unsigned short)55742;
unsigned int var_7 = 2910627757U;
int var_8 = 1674424518;
unsigned char var_9 = (unsigned char)146;
unsigned int var_10 = 978854900U;
_Bool var_11 = (_Bool)1;
int var_12 = -951361444;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2158929699U;
long long int var_15 = -3920908578904514575LL;
unsigned char var_16 = (unsigned char)36;
unsigned long long int var_17 = 10809431988500426542ULL;
unsigned int var_18 = 2592640753U;
unsigned short var_19 = (unsigned short)15192;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 4243379417U;
_Bool var_22 = (_Bool)1;
unsigned int arr_3 [21] ;
_Bool arr_4 [21] [21] [21] ;
unsigned long long int arr_5 [21] ;
unsigned short arr_6 [21] [21] [21] [21] ;
unsigned long long int arr_10 [19] [19] ;
unsigned char arr_18 [10] [10] ;
long long int arr_19 [10] ;
unsigned char arr_9 [21] [21] ;
long long int arr_16 [19] ;
_Bool arr_17 [19] ;
unsigned short arr_28 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 1910483749U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 13103915573416183153ULL : 10088049851800413052ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)26502;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = 12726986940269739389ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? -7155039502422790828LL : -6639517503788591134LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)221 : (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -7155704847633148270LL : -3571199246393542302LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)40562 : (unsigned short)36319;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
