#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2439635720U;
int var_8 = 708279076;
_Bool var_10 = (_Bool)1;
int var_12 = -2120842918;
int zero = 0;
unsigned long long int var_13 = 11628006862959858687ULL;
short var_14 = (short)-20518;
unsigned long long int var_15 = 17988030423388103814ULL;
signed char var_16 = (signed char)57;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int var_19 = -557443417;
_Bool var_20 = (_Bool)0;
unsigned char arr_0 [24] ;
unsigned int arr_1 [24] ;
short arr_2 [24] ;
unsigned int arr_4 [20] [20] ;
signed char arr_5 [20] ;
signed char arr_6 [20] ;
unsigned long long int arr_14 [20] ;
_Bool arr_3 [24] ;
unsigned long long int arr_7 [20] ;
int arr_8 [20] ;
unsigned long long int arr_16 [20] [20] [20] ;
unsigned char arr_17 [20] [20] [20] [20] ;
short arr_18 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1088058501U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-20287 : (short)3952;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 1453248269U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 12430496856039562356ULL : 3135350395434584152ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 12646846483033801718ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 24291299;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 9477408011164415229ULL : 14414249425402253686ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)78 : (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (short)-23362 : (short)-29280;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
