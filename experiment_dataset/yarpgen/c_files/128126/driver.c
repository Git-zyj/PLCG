#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 7078377885058779146ULL;
unsigned int var_7 = 3479295839U;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 280223292U;
unsigned int var_12 = 1310061801U;
signed char var_17 = (signed char)117;
signed char var_18 = (signed char)-34;
int zero = 0;
short var_20 = (short)-15345;
int var_21 = -84990996;
int var_22 = -2043446373;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)-114;
long long int var_25 = 7175650355829044020LL;
signed char var_26 = (signed char)-60;
signed char var_27 = (signed char)-32;
signed char arr_2 [10] ;
long long int arr_6 [10] [10] [10] ;
short arr_7 [10] [10] [10] ;
unsigned char arr_10 [10] ;
unsigned int arr_14 [15] ;
signed char arr_15 [15] ;
signed char arr_16 [15] ;
int arr_8 [10] [10] [10] [10] ;
_Bool arr_12 [10] [10] ;
short arr_13 [10] ;
long long int arr_17 [15] ;
unsigned short arr_18 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)116 : (signed char)114;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -2501794220741709074LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-2048 : (short)2200;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = 4149994647U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (signed char)37;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1496462547 : -1235037340;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)-32545 : (short)3807;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = -5833949118452320870LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = (unsigned short)44928;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
