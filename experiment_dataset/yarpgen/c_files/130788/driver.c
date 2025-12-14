#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 3870606594779916659ULL;
short var_10 = (short)12952;
int zero = 0;
long long int var_11 = -2156225562765945154LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 3886069705882180815LL;
unsigned long long int var_14 = 10595514180616296583ULL;
unsigned int var_15 = 2031911776U;
signed char var_16 = (signed char)-29;
unsigned int var_17 = 2069485381U;
unsigned char arr_0 [18] ;
unsigned long long int arr_2 [18] ;
unsigned char arr_3 [18] ;
unsigned long long int arr_4 [18] ;
unsigned int arr_6 [18] [18] [18] ;
unsigned int arr_7 [18] [18] [18] [18] ;
short arr_9 [18] ;
unsigned long long int arr_10 [18] [18] [18] [18] ;
unsigned long long int arr_13 [18] [18] [18] [18] [18] [18] [18] ;
short arr_15 [18] [18] [18] [18] [18] [18] [18] ;
unsigned char arr_12 [18] ;
long long int arr_16 [18] ;
unsigned char arr_17 [18] [18] ;
long long int arr_18 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 3720111505399516851ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 10582923820780811283ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2068147645U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 1078735514U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (short)-4153;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 17808685900912421715ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 16927319314693272622ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)27100;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = 7945568588149626757LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = -617941240176284461LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
