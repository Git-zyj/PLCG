#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 4204075604608800184ULL;
unsigned char var_11 = (unsigned char)223;
unsigned long long int var_13 = 4677081348820781377ULL;
unsigned long long int var_15 = 3048059613237638255ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)10;
unsigned short var_21 = (unsigned short)54412;
long long int var_22 = -5265802688012116774LL;
int var_23 = -401530665;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)0;
long long int var_26 = 8634163843534200403LL;
short arr_2 [23] ;
_Bool arr_10 [23] [23] [23] ;
_Bool arr_13 [23] [23] [23] [23] ;
unsigned char arr_14 [23] [23] ;
long long int arr_3 [23] [23] ;
signed char arr_8 [23] [23] ;
long long int arr_17 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-5366;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 7834772095967857460LL : 2925269819740272210LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)110 : (signed char)-24;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = 4657922525925539670LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
