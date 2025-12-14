#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28403;
short var_3 = (short)22850;
unsigned int var_4 = 2102014663U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 12412656336453231314ULL;
unsigned int var_7 = 2081824544U;
long long int var_8 = 4888718650537779601LL;
int var_9 = -1969535361;
signed char var_10 = (signed char)27;
int zero = 0;
int var_12 = 967290123;
unsigned short var_13 = (unsigned short)57411;
signed char var_14 = (signed char)62;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-106;
unsigned short var_17 = (unsigned short)60008;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 6658523647472290955ULL;
unsigned long long int var_20 = 9797705477436173120ULL;
short var_21 = (short)19429;
unsigned long long int var_22 = 16718917099120981433ULL;
short arr_0 [22] ;
signed char arr_1 [22] ;
signed char arr_3 [22] [22] ;
signed char arr_4 [22] [22] ;
int arr_5 [22] [22] ;
signed char arr_8 [25] ;
unsigned long long int arr_9 [25] ;
unsigned long long int arr_2 [22] [22] ;
unsigned long long int arr_6 [22] ;
signed char arr_7 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)5238;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-119;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 659071259;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)5 : (signed char)-83;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 16270388396491102830ULL : 11061730302088227780ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 7263487101463435698ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 10213125967915369711ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)114;
}

void checksum() {
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
