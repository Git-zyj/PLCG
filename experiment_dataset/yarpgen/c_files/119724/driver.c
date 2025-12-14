#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_11 = -7461232260282137433LL;
unsigned char var_13 = (unsigned char)2;
unsigned char var_15 = (unsigned char)25;
int zero = 0;
unsigned short var_17 = (unsigned short)47287;
_Bool var_18 = (_Bool)0;
int var_19 = -492770321;
short var_20 = (short)470;
int var_21 = -1721027874;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)36404;
int var_24 = -355038426;
unsigned char arr_0 [22] ;
_Bool arr_1 [22] ;
signed char arr_3 [17] [17] ;
_Bool arr_4 [17] ;
unsigned short arr_8 [10] ;
unsigned short arr_9 [10] ;
unsigned char arr_10 [10] [10] ;
int arr_2 [22] ;
long long int arr_6 [17] ;
unsigned short arr_7 [17] ;
unsigned short arr_11 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-37 : (signed char)79;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (unsigned short)57656;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (unsigned short)6371;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 1252487338;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -8760870919927449638LL : -3278935427188538929LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)729 : (unsigned short)28816;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (unsigned short)34098;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
