#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -601284676;
signed char var_7 = (signed char)-1;
unsigned long long int var_10 = 5341834540048730601ULL;
signed char var_12 = (signed char)93;
signed char var_17 = (signed char)-47;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_19 = -1154430479;
unsigned char var_20 = (unsigned char)178;
signed char var_21 = (signed char)21;
unsigned short var_22 = (unsigned short)7610;
signed char var_23 = (signed char)11;
int var_24 = -1448340074;
unsigned int arr_0 [18] ;
unsigned long long int arr_1 [18] [18] ;
unsigned long long int arr_2 [18] [18] ;
int arr_4 [22] ;
short arr_5 [22] ;
short arr_6 [22] ;
int arr_9 [25] ;
_Bool arr_10 [25] ;
long long int arr_3 [18] ;
short arr_7 [22] ;
int arr_8 [22] [22] ;
short arr_11 [25] ;
unsigned char arr_12 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 1485762361U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 5004426733718121867ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 2525997066456184030ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -912261732;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (short)3500;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (short)368;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 500033327;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 3898720383490095556LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (short)16988;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = -1268577208;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (short)21470;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (unsigned char)47;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
