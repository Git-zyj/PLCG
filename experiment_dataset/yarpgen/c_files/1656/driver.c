#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2468621105U;
_Bool var_1 = (_Bool)0;
short var_5 = (short)14906;
unsigned char var_6 = (unsigned char)163;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 1894292435300639224ULL;
unsigned short var_12 = (unsigned short)33285;
unsigned short var_13 = (unsigned short)13931;
signed char var_14 = (signed char)-23;
signed char var_16 = (signed char)53;
int zero = 0;
unsigned long long int var_17 = 4663767232245841329ULL;
_Bool var_18 = (_Bool)0;
int var_19 = -86071069;
signed char var_20 = (signed char)-96;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2080845311U;
signed char var_23 = (signed char)-52;
unsigned long long int var_24 = 9302483003583028919ULL;
signed char var_25 = (signed char)124;
_Bool var_26 = (_Bool)0;
long long int var_27 = 1413059534120517515LL;
_Bool var_28 = (_Bool)0;
unsigned char var_29 = (unsigned char)156;
signed char var_30 = (signed char)-91;
int var_31 = 1293110398;
unsigned short var_32 = (unsigned short)9141;
unsigned char var_33 = (unsigned char)218;
_Bool arr_1 [18] [18] ;
long long int arr_5 [18] [18] [18] [18] ;
signed char arr_10 [14] ;
long long int arr_23 [25] ;
signed char arr_24 [25] ;
int arr_25 [25] [25] [25] ;
_Bool arr_27 [25] [25] ;
unsigned int arr_7 [18] ;
long long int arr_8 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 6901788808438522271LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = -8664797534059354557LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 1981042946;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_27 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 3678496194U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = -8639123942246451618LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
