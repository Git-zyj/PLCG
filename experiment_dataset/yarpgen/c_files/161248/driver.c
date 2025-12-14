#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)160;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)26;
unsigned long long int var_11 = 3318800676674075001ULL;
unsigned char var_12 = (unsigned char)127;
unsigned long long int var_13 = 5880698658717965633ULL;
long long int var_15 = 2691867626851851513LL;
unsigned long long int var_16 = 10782081885559020625ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)35;
int var_19 = -2120792429;
long long int var_20 = -3493662359450636532LL;
int var_21 = -2007537886;
short var_22 = (short)-12550;
int var_23 = 1439575900;
unsigned char var_24 = (unsigned char)248;
unsigned long long int var_25 = 11167191303048588512ULL;
unsigned char arr_0 [12] ;
long long int arr_1 [12] ;
unsigned short arr_2 [12] ;
_Bool arr_3 [12] [12] ;
_Bool arr_4 [12] ;
unsigned long long int arr_5 [12] [12] ;
signed char arr_9 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 3414201829083096152LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)41541;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 561228285944434489ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)34 : (signed char)31;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
